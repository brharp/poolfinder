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

void create_event_form(struct event *x)
{
    printf("<form method='post' action='?action=create'>");
    printf("<div><label>Summary</label></div>");
    printf("<div><input type='text' name='summary' value='%s'></div>", x->summary);
    printf("<div><label>Location</label></div>");
    printf("<div><input type='text' name='location' value='%s'></div>", x->location);
    printf("<div><label>Geo</label></div>");
    printf("<div><input type='text' name='geo' value='%s'></div>", x->geo);
    printf("<div><label>From</label></div>");
    printf("<div><input type='date' name='from' value='%s'></div>", x->from);
    printf("<div><label>To</label></div>");
    printf("<div><input type='date' name='to' value='%s'></div>", x->to);
    printf("<div><label>Start</label></div>");
    printf("<div><input type='time' name='start' value='%s'></div>", x->start);
    printf("<div><label>End</label></div>");
    printf("<div><input type='time' name='end' value='%s'></div>", x->end);
    printf("<div><label>Days</label></div>");
    printf("<div><input type='text' name='byday' value='%s'></div>", x->byday);
    printf("<div><label>Exdate</label></div>");
    printf("<div><input type='text' name='exdate' value='%s'></div>", x->exdate);
    printf("<div><input type='submit'></div>");
    printf("</form>");
}

void edit_event_form(struct event *x)
{
    printf("<form method='post' action='?action=edit'>");
    printf("<input type='hidden' name='uid' value='%s'>", x->uid);
    printf("<div><label>Summary</label></div>");
    printf("<div><input type='text' name='summary' value='%s'></div>", x->summary);
    printf("<div><label>Location</label></div>");
    printf("<div><input type='text' name='location' value='%s'></div>", x->location);
    printf("<div><label>Geo</label></div>");
    printf("<div><input type='text' name='geo' value='%s'></div>", x->geo);
    printf("<div><label>From</label></div>");
    printf("<div><input type='date' name='from' value='%s'></div>", x->from);
    printf("<div><label>To</label></div>");
    printf("<div><input type='date' name='to' value='%s'></div>", x->to);
    printf("<div><label>Start</label></div>");
    printf("<div><input type='time' name='start' value='%s'></div>", x->start);
    printf("<div><label>End</label></div>");
    printf("<div><input type='time' name='end' value='%s'></div>", x->end);
    printf("<div><label>Days</label></div>");
    printf("<div><input type='text' name='byday' value='%s'></div>", x->byday);
    printf("<div><label>Exdate</label></div>");
    printf("<div><input type='text' name='exdate' value='%s'></div>", x->exdate);
    printf("<div><input type='submit'></div>");
    printf("</form>");
}

int main(int argc, char *argv)
{
  char *s, *p, *action = "", *uid;
  struct event x, y;
  FILE *events;
  uuid_t u;

  memset(&x, 0, sizeof(x));

  printf("Content-type: text/html\n\n");
  printf("<html>");

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
    printf("<title>Create Event</title>");
    printf("<body>");
    printf("<h1>Create Event</h1>");
    if (strcasecmp(getenv("REQUEST_METHOD"), "POST") == 0)
    {
      /* read post body */;
      scanf("%ms", &s);
      /* bind parameters */
      for (; p = strtok(s, "&"); s = 0)
      {
        if (strncmp(p, "summary=", 8) == 0)
          formurldecode(x.summary, p + 8, sizeof(x.summary));
        else if (strncmp(p, "location=", 9) == 0)
          formurldecode(x.location, p + 9, sizeof(x.location));
        else if (strncmp(p, "geo=", 4) == 0)
          formurldecode(x.geo, p + 4, sizeof(x.geo));
        else if (strncmp(p, "from=", 5) == 0)
          formurldecode(x.from, p + 5, sizeof(x.from));
        else if (strncmp(p, "to=", 3) == 0)
          formurldecode(x.to, p + 3, sizeof(x.to));
        else if (strncmp(p, "start=", 6) == 0)
          formurldecode(x.start, p + 6, sizeof(x.start));
        else if (strncmp(p, "end=", 4) == 0)
          formurldecode(x.end, p + 4, sizeof(x.end));
        else if (strncmp(p, "byday=", 6) == 0)
          formurldecode(x.byday, p + 6, sizeof(x.byday));
        else if (strncmp(p, "exdate=", 7) == 0)
          formurldecode(x.exdate, p + 7, sizeof(x.exdate));
      }
      uuid_generate(u);
      uuid_unparse(u, x.uid);
      events = fopen("events.ical", "a");
      putical(events, &x);
      fclose(events);
      printf("<div>Event created.</div>");
    }
    create_event_form(&x);
  }
  else if (strcmp(action, "copy") == 0)
  {
    const char *title = "Copy Event";
    printf("<title>%s</title>", title);
    printf("<h1>%s</h1>", title);
    events = fopen("events.ical", "r");
    while (getical(events, &x))
    {
      if (strcmp(x.uid, uid) == 0)
      {
        create_event_form(&x);
      }
    }
    fclose(events);
  }
  else if (strcmp(action, "edit") == 0)
  {
    if (strcasecmp(getenv("REQUEST_METHOD"), "POST") == 0)
    {
      char tmpnam[PATH_MAX];
      strcpy(tmpnam, "events.XXXXXX");
      FILE *tmp = fdopen(mkstemp(tmpnam), "a");
      events = fopen("events.ical", "r");
      while (getical(events, &x))
      {
        if (strcmp(x.uid, uid) == 0)
          putical(tmp, &y);
        else
          putical(tmp, &x);
      }
      fclose(events);
      unlink("events.bak");
      rename("events.ical", "events.bak");
      rename(tmpnam, "events.ical");
    }
    else
    {
      events = fopen("events.ical", "r");
      while (getical(events, &x))
      {
        if (strcmp(x.uid, uid) == 0)
        {
          edit_event_form(&x);
        }
      }
      fclose(events);
      printf("Status: 301\n");
      printf("Location: .\n");
    }
  }
  else
  {
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
    events = fopen("events.ical", "r");
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


