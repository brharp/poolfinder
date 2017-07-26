
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <linux/uuid.h>

struct event
{
  char uid[40];
  char summary[100];
  char location[100];
  char geo[50];
  char dtstart[50];
  char dtend[50];
  char byday[50];
  char until[50];
  char exdate[100];
};

int putical(FILE *, struct event *);
int getical(FILE *, struct event *);
char *formurldecode(char *dest, const char *src, size_t n);


int main(int argc, char *argv)
{
  char *s, *p, *action;
  struct event x;
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
        else if (strncmp(p, "dtstart=", 8) == 0)
          formurldecode(x.dtstart, p + 8, sizeof(x.dtstart));
        else if (strncmp(p, "dtend=", 6) == 0)
          formurldecode(x.dtend, p + 6, sizeof(x.dtend));
        else if (strncmp(p, "until=", 6) == 0)
          formurldecode(x.until, p + 6, sizeof(x.until));
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
    printf("<form method='post'>");
    printf("<div><div><label>Summary</label></div></div>");
    printf("<div><div><input type='text' name='summary' value='%s'></div>", x.summary);
    printf("<div><label>Location</label></div>");
    printf("<div><input type='text' name='location' value='%s'></div>", x.location);
    printf("<div><label>Geo</label></div>");
    printf("<div><input type='text' name='geo' value='%s'></div>", x.geo);
    printf("<div><label>Start</label></div>");
    printf("<div><input type='datetime-local' name='dtstart' value='%s'></div>", x.dtstart);
    printf("<div><label>End</label></div>");
    printf("<div><input type='datetime-local' name='dtend' value='%s'></div>", x.dtend);
    printf("<div><label>Until</label></div>");
    printf("<div><input type='datetime-local' name='until' value='%s'></div>", x.until);
    printf("<div><label>Days</label></div>");
    printf("<div><input type='text' name='byday' value='%s'></div>", x.byday);
    printf("<div><label>Exdate</label></div>");
    printf("<div><input type='text' name='exdate' value='%s'></div>", x.exdate);
    printf("<div><input type='submit'></div>");
    printf("</form>");
  }
  else
  {
    printf("<title>Index</title>");
    printf("<table>");
    printf("<tr>");
    printf("<th>Summary</th>");
    printf("<th>Location</th>");
    printf("<th>Geo</th>");
    printf("<th>Start</th>");
    printf("<th>End</th>");
    printf("<th>Byday</th>");
    printf("<th>Until</th>");
    printf("<th>Exdate</th>");
    printf("</tr>");
    events = fopen("events.ical", "r");
    while (getical(events, &x))
    {
      printf("<tr>");
      printf("<td>%s</td>", x.summary);
      printf("<td>%s</td>", x.location);
      printf("<td>%s</td>", x.geo);
      printf("<td>%s</td>", x.dtstart);
      printf("<td>%s</td>", x.dtend);
      printf("<td>%s</td>", x.byday);
      printf("<td>%s</td>", x.until);
      printf("<td>%s</td>", x.exdate);
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
    name = strsep(&s, ":");
    value = strsep(&s, "\n");

    if (strcmp(name, "BEGIN") == 0)
      memset(x, 0, sizeof(*x));
    else if (strcmp(name, "END") == 0)
      return 1;
    else if (strcmp(name, "SUMMARY") == 0)
      strncpy(x->summary, value, sizeof(x->summary));
    else if (strcmp(name, "LOCATION") == 0)
      strncpy(x->location, value, sizeof(x->location));
    else if (strcmp(name, "GEO") == 0)
      strncpy(x->geo, value, sizeof(x->geo));
    else if (strcmp(name, "DTSTART") == 0)
      strncpy(x->dtstart, value, sizeof(x->dtstart));
    else if (strcmp(name, "DTEND") == 0)
      strncpy(x->dtend, value, sizeof(x->dtend));
    else if (strcmp(name, "RRULE") == 0)
      for (s = value; p = strtok(s, ";"); s = 0)
        if (strncmp(p, "BYDAY=", 6) == 0)
          strncpy(x->byday, p + 6, sizeof(x->byday));
        else if (strncmp(p, "UNTIL=", 6) == 0)
          strncpy(x->until, p + 6, sizeof(x->until));
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
  fprintf(events, "DTSTART:%s\n", x->dtstart);
  fprintf(events, "DTEND:%s\n", x->dtend);
  fprintf(events, "RRULE:FREQ=WEEKLY;UNTIL=%s;BYDAY=%s\n", x->until, x->byday);
  fprintf(events, "EXDATE:%s\n", x->exdate);
  fprintf(events, "END:VEVENT\n");
  return 0;
}

char *formurldecode(char *dest, const char *src, size_t n)
{
  unsigned int ch, nc;
  char *start = dest, *end = src + n - 1;
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


