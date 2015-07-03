#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "data.h"
#include "template.h"

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
	return dx < 0.2 && dy < 0.2;
}

int swimcompar(const void *p1, const void *p2)
{
	const struct swim *sp1 = p1;
	const struct swim *sp2 = p2;

	return (sp1->start - sp2->start);
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

	/*
	printf("<h1>%s <small>%s</small></h1>\n",
		dowtab[dow].print_name, placetab[placeid].print_name);
	*/

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

	buffer = open_memstream(&content, &contentlen);
	fprintf(buffer, "<ul class='nav nav-pills'>");
	for (i = 0; i < placecnt; i++) {
		fprintf(buffer, "<li role='presentation'><a href='%s%s?q=%d'>%s</a></li>\n",
			script, "schedule", placetab[i].id, placetab[i].print_name);
	}
	fprintf(buffer, "</ul>");
	fclose(buffer);

	page(stdout, "Find pools near...", NULL, content);
	free(content);
}


void schedule()
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


#include "menu.h"

int main (int argc, char *argv[])
{
	char *query, *pathinfo;
	int menucnt = sizeof(menutab) / sizeof(menutab[0]);
	int menuid;

	setenv("TZ", "EST", 1);
	pathinfo = getenv("PATH_INFO");

	for (menuid = 0; menuid < menucnt; menuid++) {
		if (strcmp(menutab[menuid].path, pathinfo) == 0) {
			menutab[menuid].action();
			break;
		}
	}

	if (menuid == menucnt) {
		printf("Status: 404 Not found\n\n");
	}

	return(0);
}

