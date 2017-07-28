#define _POSIX_SOURCE
#define _BSD_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <uuid/uuid.h>
#include <unistd.h>
#include <linux/limits.h>
#include <string.h>

#define BODY   "body"
#define TITLE  "title"
#define H1     "h1"

#define DATA_FILE "/pf/events.ical"
#define BACKUP_FILE "/pf/events.bak"

struct event
{
  char uid[40];
  char summary[100];
  char location[100];
  char geo[50];
  char from[30];
  char to[30];
  char start[30];
  char end[30];
  char byday[50];
  char exdate[100];
};

int putical(FILE *, struct event *);
int getical(FILE *, struct event *);
char *formurldecode(char *dest, const char *src, size_t n);

void bind_request_params(struct event *x)
{
  char *s, *p;
  /* read post body */;
  scanf("%ms", &s);
  /* bind parameters */
  for (; p = strtok(s, "&"); s = 0)
  {
    if (strncmp(p, "uid=", 4) == 0)
      formurldecode(x->uid, p + 4, sizeof(x->uid));
    else if (strncmp(p, "summary=", 8) == 0)
      formurldecode(x->summary, p + 8, sizeof(x->summary));
    else if (strncmp(p, "location=", 9) == 0)
      formurldecode(x->location, p + 9, sizeof(x->location));
    else if (strncmp(p, "geo=", 4) == 0)
      formurldecode(x->geo, p + 4, sizeof(x->geo));
    else if (strncmp(p, "from=", 5) == 0)
      formurldecode(x->from, p + 5, sizeof(x->from));
    else if (strncmp(p, "to=", 3) == 0)
      formurldecode(x->to, p + 3, sizeof(x->to));
    else if (strncmp(p, "start=", 6) == 0)
      formurldecode(x->start, p + 6, sizeof(x->start));
    else if (strncmp(p, "end=", 4) == 0)
      formurldecode(x->end, p + 4, sizeof(x->end));
    else if (strncmp(p, "byday=", 6) == 0)
      formurldecode(x->byday, p + 6, sizeof(x->byday));
    else if (strncmp(p, "exdate=", 7) == 0)
      formurldecode(x->exdate, p + 7, sizeof(x->exdate));
  }
  free(s);
}

void form_input(FILE *stream, const char *id, const char *label,
    const char *type, const char *name, const char *value)
{
  if (strcmp(type, "hidden") == 0)
  {
    fprintf(stream, "<input id='%s' type='%s' name='%s' value='%s'>\n", id, type, name, value);
  }
  else
  {
    fprintf(stream, "<div><label for='%s'>%s</label></div>\n", id, label);
    fprintf(stream, "<div><input id='%s' type='%s' name='%s' value='%s'></div>\n", id, type, name, value);
  }
}

void edit_event_form(struct event *x)
{
  printf("<form method='post'>");
  form_input(stdout, "uid", NULL, "hidden", "uid", x->uid);
  form_input(stdout, "summary", "Summary", "text", "summary", x->summary);
  form_input(stdout, "location", "Location", "text", "location", x->location);
  form_input(stdout, "geo", "Geo", "text", "geo", x->geo);
  form_input(stdout, "from", "From", "date", "from", x->from);
  form_input(stdout, "to", "To", "date", "to", x->to);
  form_input(stdout, "start", "Start", "time", "start", x->start);
  form_input(stdout, "end", "End", "time", "end", x->end);
  form_input(stdout, "byday", "Days", "text", "byday", x->byday);
  form_input(stdout, "exdate", "Exdate", "text", "exdate", x->exdate);
  printf("<div><input type='submit'></div>");
  printf("</form>");
}

void create_event(struct event *x)
{
  uuid_t u;
  uuid_generate(u);
  uuid_unparse(u, x->uid);
  FILE *events = fopen(DATA_FILE, "a");
  putical(events, x);
  fclose(events);
}

void send_redirect(const char *url)
{
  printf("Status: 301\n");
  printf("Location: %s\n\n", url);
}

int main(int argc, char *argv)
{
  char *s, *p, *action = "", *uid;
  struct event x, y;
  FILE *events;

  memset(&x, 0, sizeof(x));
  memset(&y, 0, sizeof(y));

  s = getenv("QUERY_STRING");
  for (; p = strtok(s, "&"); s = 0)
  {
    if (strncmp(p, "action=", 7) == 0)
      action = p + 7;
    else if (strncmp(p, "uid=", 4) == 0)
      uid = p + 4;
  }

  if (strcmp(action, "create") == 0)
  {
    printf("Content-type: text/html\n\n");
    printf("<html>");
    printf("<title>Create Event</title>");
    printf("<body>");
    printf("<h1>Create Event</h1>");
    if (strcasecmp(getenv("REQUEST_METHOD"), "POST") == 0)
    {
      bind_request_params(&x);
      create_event(&x);
      printf("<div>Event created.</div>");
    }
    edit_event_form(&x);
    printf("</html>");
  }
  else if (strcmp(action, "copy") == 0)
  {
    if (strcasecmp(getenv("REQUEST_METHOD"), "POST") == 0)
    {
      bind_request_params(&x);
      create_event(&x);
      send_redirect(getenv("SCRIPT_NAME"));
    }
    else /* REQUEST_METHOD == "GET" */
    {
      const char *title = "Copy Event";
      printf("Content-type: text/html\n\n");
      printf("<html>");
      printf("<title>%s</title>", title);
      printf("<h1>%s</h1>", title);
      events = fopen(DATA_FILE, "r");
      while (getical(events, &x))
      {
        if (strcmp(x.uid, uid) == 0)
        {
          x.uid[0] = 0;
          edit_event_form(&x);
        }
      }
      fclose(events);
    }
  }
  else if (strcmp(action, "edit") == 0)
  {
    if (strcasecmp(getenv("REQUEST_METHOD"), "POST") == 0)
    {
      bind_request_params(&y);
      char tmpnam[PATH_MAX];
      strcpy(tmpnam, "/tmp/events.XXXXXX");
      FILE *tmp = fdopen(mkstemp(tmpnam), "a");
      events = fopen(DATA_FILE, "r");
      while (getical(events, &x))
      {
        if (strcmp(x.uid, uid) == 0)
          putical(tmp, &y);
        else
          putical(tmp, &x);
      }
      fclose(events);
      unlink(BACKUP_FILE);
      rename(DATA_FILE, BACKUP_FILE);
      rename(tmpnam, DATA_FILE);
      printf("Status: 301\n");
      printf("Location: %s\n\n", getenv("SCRIPT_NAME"));
    }
    else
    {
      const char *title = "Edit Event";
      printf("Content-type: text/html\n\n");
      printf("<html>");
      printf("<title>%s</title>", title);
      printf("<h1>%s</h1>", title);
      events = fopen(DATA_FILE, "r");
      while (getical(events, &x))
      {
        if (strcmp(x.uid, uid) == 0)
        {
          edit_event_form(&x);
        }
      }
      fclose(events);
      printf("</html>");
    }
  }
  else
  {
    printf("Content-type: text/html\n\n");
    printf("<style>table,th,td { border: thin solid gray }</style>");
    printf("<title>Index</title>");
    printf("<table>");
    printf("<tr>");
    printf("<th>Summary</th>");
    printf("<th>Location</th>");
    printf("<th>Geo</th>");
    printf("<th>From</th>");
    printf("<th>To</th>");
    printf("<th>Start</th>");
    printf("<th>End</th>");
    printf("<th>Byday</th>");
    printf("<th>Exdate</th>");
    printf("<th>Actions</th>");
    printf("</tr>");
    events = fopen(DATA_FILE, "r");
    if (events != NULL)
    while (getical(events, &x))
    {
      printf("<tr>");
      printf("<td>%s</td>", x.summary);
      printf("<td>%s</td>", x.location);
      printf("<td>%s</td>", x.geo);
      printf("<td>%s</td>", x.from);
      printf("<td>%s</td>", x.to);
      printf("<td>%s</td>", x.start);
      printf("<td>%s</td>", x.end);
      printf("<td>%s</td>", x.byday);
      printf("<td>%s</td>", x.exdate);
      printf("<td>");
      printf("<a href='?action=copy&uid=%s'>Copy</a>", x.uid);
      printf(" | ");
      printf("<a href='?action=edit&uid=%s'>Edit</a>", x.uid);
      printf("</td>");
      printf("</tr>");
    }
    fclose(events);
    printf("</table>");
    printf("<div><a href='?action=create'>Create</a></div>");
  }

  exit(EXIT_SUCCESS);
}

int getical(FILE *stream, struct event *x)
{
  char *name, *value, *s, *p, line[80];

  while (s = fgets(line, sizeof(line), stream))
  {
    char dtstart[30], dtend[30], *p;

    name = strsep(&s, ":");
    value = strsep(&s, "\n");

    if (strcmp(name, "BEGIN") == 0)
      memset(x, 0, sizeof(*x));
    else if (strcmp(name, "END") == 0)
      return 1;
    else if (strcmp(name, "UID") == 0)
      strncpy(x->uid, value, sizeof(x->uid));
    else if (strcmp(name, "SUMMARY") == 0)
      strncpy(x->summary, value, sizeof(x->summary));
    else if (strcmp(name, "LOCATION") == 0)
      strncpy(x->location, value, sizeof(x->location));
    else if (strcmp(name, "GEO") == 0)
      strncpy(x->geo, value, sizeof(x->geo));
    else if (strcmp(name, "DTSTART") == 0) {
      strncpy(x->from, strsep(&value, "T"), sizeof(x->from));
      strncpy(x->start, value, sizeof(x->start));
    }
    else if (strcmp(name, "DTEND") == 0) {
      strncpy(x->from, strsep(&value, "T"), sizeof(x->from));
      strncpy(x->end, value, sizeof(x->end));
    }
    else if (strcmp(name, "RRULE") == 0)
      for (s = value; p = strtok(s, ";"); s = 0)
        if (strncmp(p, "BYDAY=", 6) == 0)
          strncpy(x->byday, p + 6, sizeof(x->byday));
        else if (strncmp(p, "UNTIL=", 6) == 0)
          strncpy(x->to, p + 6, sizeof(x->to));
    else if (strcmp(name, "EXDATE") == 0)
      strncpy(x->exdate, value, sizeof(x->exdate));
  }
  return 0;
}

int putical(FILE *events, struct event *x)
{
  fprintf(events, "BEGIN:VEVENT\n");
  fprintf(events, "UID:%s\n", x->uid);
  fprintf(events, "SUMMARY:%s\n", x->summary);
  fprintf(events, "LOCATION:%s\n", x->location);
  fprintf(events, "GEO:%s\n", x->geo);
  fprintf(events, "DTSTART:%sT%s\n", x->from, x->start);
  fprintf(events, "DTEND:%sT%s\n", x->from, x->end);
  fprintf(events, "RRULE:FREQ=WEEKLY;UNTIL=%s;BYDAY=%s\n", x->to, x->byday);
  fprintf(events, "EXDATE:%s\n", x->exdate);
  fprintf(events, "END:VEVENT\n");
  return 0;
}

char *formurldecode(char *dest, const char *src, size_t n)
{
  unsigned int ch, nc;
  char *start = dest;
  const char *end = src + n - 1;
  while (*src != 0 && src != end) {
    switch (ch = *src++) {
      case '+': ch = ' '; break;
      case '%': if (sscanf(src, "%2x%n", &ch, &nc)) src += nc; break;
      default: break;
    }
    *dest++ = ch;
  }
  *dest = '\0';
  return start;
}


