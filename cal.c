
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

struct event
{
  char summary[30];
  char location[30];
  char geo[30];
  char dtstart[30];
  char dtend[30];
  char byday[30];
  char until[30];
};

int putical(FILE *, struct event *);
int getical(FILE *, struct event *);

int main(int argc, char *argv)
{
  char *s, *p, *action;
  struct event x;
  FILE *events;

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
    if (strcasecmp(getenv("REQUEST_METHOD"), "POST") == 0)
    {
      /* read post body */;
      scanf("%ms", &s);
      /* bind parameters */
      for (; p = strtok(s, "&"); s = 0)
      {
        if (strncmp(p, "summary=", 8) == 0)
          strncpy(x.summary, p + 8, sizeof(x.summary));
        else if (strncmp(p, "location=", 9) == 0)
          strncpy(x.location, p + 9, sizeof(x.location));
        else if (strncmp(p, "geo=", 4) == 0)
          strncpy(x.geo, p + 4, sizeof(x.geo));
        else if (strncmp(p, "dtstart=", 8) == 0)
          strncpy(x.dtstart, p + 8, sizeof(x.dtstart));
        else if (strncmp(p, "dtend=", 6) == 0)
          strncpy(x.dtend, p + 6, sizeof(x.dtend));
        else if (strncmp(p, "until=", 6) == 0)
          strncpy(x.until, p + 6, sizeof(x.until));
        else if (strncmp(p, "byday=", 6) == 0)
          strncpy(x.byday, p + 6, sizeof(x.byday));
      }
      events = fopen("events", "a");
      putical(events, &x);
      fclose(events);
      printf("<div>Event created.</div>");
    }
    printf("<form method='post'>");
    printf("<div>");
    printf("<label>Summary</label>");
    printf("<input type='text' name='summary' value='%s'>", x.summary);
    printf("</div>");
    printf("<div>");
    printf("<label>Location</label>");
    printf("<input type='text' name='location' value='%s'>", x.location);
    printf("</div>");
    printf("<div>");
    printf("<label>Geo</label>");
    printf("<input type='text' name='geo' value='%s'>", x.geo);
    printf("</div>");
    printf("<div>");
    printf("<label>Start</label>");
    printf("<input type='datetime-local' name='dtstart' value='%s'>", x.dtstart);
    printf("</div>");
    printf("<div>");
    printf("<label>End</label>");
    printf("<input type='datetime-local' name='dtend' value='%s'>", x.dtend);
    printf("</div>");
    printf("<div>");
    printf("<label>Until</label>");
    printf("<input type='datetime-local' name='until' value='%s'>", x.until);
    printf("</div>");
    printf("<div>");
    printf("<label>Days</label>");
    printf("<input type='text' name='byday' value='%s'>", x.byday);
    printf("</div>");
    printf("<div>");
    printf("<input type='submit'>");
    printf("</div>");
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
    printf("</tr>");
    events = fopen("events", "r");
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
      printf("</tr>");
    }
    fclose(events);
  }

  exit(EXIT_SUCCESS);
}

int getical(FILE *stream, struct event *x)
{
  char *name, *value, *s, *p;
  /* parse line into name, params, value(s) */
  if (strcmp(name, "SUMMARY") == 0)
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
  return 1;
}

int putical(FILE *events, struct event *x)
{
  fprintf(events, "BEGIN:VEVENT\n");
  fprintf(events, "SUMMARY:%s\n", x->summary);
  fprintf(events, "LOCATION:%s\n", x->location);
  fprintf(events, "GEO:%s\n", x->geo);
  fprintf(events, "DTSTART:%s\n", x->dtstart);
  fprintf(events, "DTEND:%s\n", x->dtend);
  fprintf(events, "RRULE:FREQ=WEEKLY;UNTIL=%s;BYDAY=%s\n", x->until, x->byday);
  fprintf(events, "END:VEVENT\n");
  return 0;
}

