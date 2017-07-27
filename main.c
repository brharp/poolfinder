#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "data.h"
#include "template.h"
#include "menu.h"

int day_of_week()
{
	time_t t;
	struct tm *tmp;
	int dow;

	t = time(NULL);
	tmp = localtime(&t);

	return tmp->tm_wday;
}

int islocal(int placeid, int poolid)
{
	float dx = fabsf(placetab[placeid].lat - pooltab[poolid].lat);
	float dy = fabsf(placetab[placeid].lng - pooltab[poolid].lng);
	return dx < 0.1 && dy < 0.1;
}

int swimcompar(const void *p1, const void *p2)
{
	const struct swim *sp1 = p1;
	const struct swim *sp2 = p2;

	return (sp1->start - sp2->start);
}

int placecompar(const void *p1, const void *p2)
{
	const struct place *place1 = p1;
	const struct place *place2 = p2;

	return strcoll(place1->print_name, place2->print_name);
}
	
int show_schedule(int placeid)
{
	FILE *buffer;
	char *content;
	size_t contentlen;
	int dow;
	int swimcnt;
	int i;

	printf("Content-type: text/html\n\n");

	dow = day_of_week();
	swimcnt = sizeof(swimtab) / sizeof(swimtab[0]);

	buffer = open_memstream(&content, &contentlen);

	fputs("<table class='table table-bordered table-striped'>", buffer);

	qsort(swimtab, swimcnt, sizeof(swimtab[0]), swimcompar);

	for (i = 0; i < swimcnt; i++) {
		int poolid = swimtab[i].pool;
		if (islocal(placeid, poolid) && (swimtab[i].day_of_week & (1<<dow))) {
			int s = swimtab[i].start;
			int e = swimtab[i].end;
			int h = s / 100;
			int m = s % 100;
			int d = ((e/100-h) * 60) + (e%100-m);
			fprintf(buffer,
			       "<tr><th class='text-right'>%d:%02d %cm</th><td>"
			       "<div class='text-success'>%s</div>"
			       "<div class='text-muted'>%d min "
			       "(<a href='%s'>%s</a>)</div></td></tr>\n",
				h>12?h%12:h, m, h>=12?'p':'a',
				typetab[swimtab[i].type].print_name, d,
				anchortab[poolid].href,
				pooltab[swimtab[i].pool].print_name);
		}
	}
	fputs("</table>", buffer);

	fclose(buffer);

	page(stdout, dowtab[dow].print_name, placetab[placeid].print_name,
		content);

	free(content);
}


void list_places()
{
	int i;
	int placecnt = sizeof(placetab) / sizeof(placetab[0]);
	FILE *buffer;
	char *content;
	size_t contentlen;
	char *script;

	printf("Content-type: text/html\n\n");

	script = getenv("SCRIPT_NAME");

	qsort(placetab, placecnt, sizeof(placetab[0]), placecompar);

	buffer = open_memstream(&content, &contentlen);
	fprintf(buffer, "<ul class='nav nav-pills'>");
	for (i = 0; i < placecnt; i++) {
		fprintf(buffer, "<li role='presentation'><a href='%s%s?q=%d'>%s</a></li>\n",
			script, menu_get_path(MENUITEM_SCHEDULE), placetab[i].id,
			placetab[i].print_name);
	}
	fprintf(buffer, "</ul>");
	fclose(buffer);

	page(stdout, "Find pools near...", NULL, content);
	free(content);
}


void schedule_action()
{
	int placeid;
	int placecnt = sizeof(placetab) / sizeof(placetab[0]);
	char *query;

	query = getenv("QUERY_STRING");
	if (query && sscanf(query, "q=%d", &placeid) == 1 
		&& placeid >= 0 && placeid < placecnt)
		show_schedule(placeid);
	else
		printf("Status: 404 Not found\n\n");
}


void pools_action()
{
	int i;
	int poolcnt = sizeof(pooltab) / sizeof(pooltab[0]);
	FILE *buffer;
	char *content;
	size_t contentlen;
	
	printf("Content-type: text/html\n\n");
	buffer = open_memstream(&content, &contentlen);
	fprintf(buffer, "<table class='table table-striped table-bordered'>\n");
	fprintf(buffer, "<tr><th>Pool</th><th>Last modified</th><th>Expires</th></tr>\n");
	for (i = 0; i < poolcnt; i++) {
		fprintf(buffer, "<tr><td><a href='%s'>%s</a></td><td>%s</td><td>%s</td></tr>\n",
			anchortab[pooltab[i].id].href,
			pooltab[i].print_name, pooltab[i].last_modified,
			pooltab[i].expires);
	}
	fprintf(buffer, "</table>\n");
	fclose(buffer);
	page(stdout, "Pools", NULL, content);
	free(content);
}


void show_pool_schedule(int poolid)
{
	int i;
	int swimcnt = sizeof(swimtab) / sizeof(swimtab[0]);
	FILE *buffer;
	char *content;
	size_t contentlen;

	printf("Content-type: text/html\n\n");
	buffer = open_memstream(&content, &contentlen);
	fputs("<table class='table table-bordered table-striped'>", buffer);
	fputs("<tr><th>Type</th><th>Mo</th><th>Tu</th><th>We</th><th>Th</th><th>Fr</th>"
		"<th>Sa</th><th>Su</th><th>Start</th><th>End</th></tr>\n", buffer);
	for (i = 0; i < swimcnt; i++) {
		if (swimtab[i].pool == poolid) {
			fprintf(buffer,
				"<tr><td>%s</td>"
				"<td><input type='checkbox' %s></td>"
				"<td><input type='checkbox' %s></td>"
				"<td><input type='checkbox' %s></td>"
				"<td><input type='checkbox' %s></td>"
				"<td><input type='checkbox' %s></td>"
				"<td><input type='checkbox' %s></td>"
				"<td><input type='checkbox' %s></td>"
				"<td>%d</td><td>%d</td></tr>\n",
				typetab[swimtab[i].type].print_name,
				swimtab[i].day_of_week & MO ? "checked" : "",
				swimtab[i].day_of_week & TU ? "checked" : "",
				swimtab[i].day_of_week & WE ? "checked" : "",
				swimtab[i].day_of_week & TH ? "checked" : "",
				swimtab[i].day_of_week & FR ? "checked" : "",
				swimtab[i].day_of_week & SA ? "checked" : "",
				swimtab[i].day_of_week & SU ? "checked" : "",
				swimtab[i].start,
				swimtab[i].end);
		}
	}
	fputs("</table>", buffer);
	fclose(buffer);
	page(stdout, pooltab[poolid].print_name, "Schedule", content);
	free(content);
}


void pool_schedule_action()
{
        int poolid;
        int poolcnt = sizeof(pooltab) / sizeof(pooltab[0]);
        char *query;

        query = getenv("QUERY_STRING");
        if (query && sscanf(query, "q=%d", &poolid) == 1
                && poolid >= 0 && poolid < poolcnt)
                show_pool_schedule(poolid);
        else
                printf("Status: 404 Not found\n\n");
}


struct menuitem {
	int id;
	char *path;
	void (*action)(void);
} menutab[] = {
	MENUITEM_POOL_SCHEDULE, "pool/schedule", pool_schedule_action,
	MENUITEM_SCHEDULE,      "schedule",      schedule_action,
	MENUITEM_POOLS,         "pools",         pools_action,
	MENUITEM_HOME,          "",              list_places,
};


char *menu_get_path(int id)
{
	int menucnt = sizeof(menutab) / sizeof(menutab[0]);
	int menuid;

	for (menuid = 0; menuid < menucnt; menuid++) {
		if (menuid == id) {
			return menutab[id].path;
		}
	}

	return NULL;
}


int main (int argc, char *argv[])
{
	char *query, *pathinfo, *querystring;
	int menucnt = sizeof(menutab) / sizeof(menutab[0]);
	int menuid;

	setenv("TZ", "EST", 1);
	pathinfo = getenv("PATH_INFO");
	querystring = getenv("QUERY_STRING");

	for (char *str = strdup(querystring); ; str = NULL) {
		char *name = strtok(str, "=");
		if (name == NULL)
			break;
		char *value = strtok(NULL, "&");
		if (value == NULL)
			break;
		if (strcmp(name, "id") == 0) {
			int id = atol(value);
			printf("---> id = %d\n", id);
		}
	}

	for (menuid = 0; menuid < menucnt; menuid++) {
		if (strcmp(menutab[menuid].path, pathinfo+1) == 0) {
			menutab[menuid].action();
			break;
		}
	}

	if (menuid == menucnt) {
		printf("Status: 404 Not found\n\n");
	}

	return(0);
}

