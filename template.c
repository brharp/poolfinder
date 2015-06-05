
#include <stdio.h>
#include <stdlib.h>
#include "template.h"

#define TITLE_MAX 512

void html(FILE *stream, const char *title, const char *page)
{
	fprintf(stream, HTML("%s", "%s"), title, page);
}

void page(FILE *stream, const char *title, const char *subtitle,
	const char *body)
{
	FILE *buffer;
	char page_title[TITLE_MAX];
	char *content;
	size_t contentlen;

	snprintf(page_title, sizeof(page_title),
		subtitle ? H1("%s " SMALL("%s")) : H1("%s"),
		title, subtitle);

	buffer = open_memstream(&content, &contentlen);
	fprintf(buffer, PAGE("%s", "%s"), page_title, body);
	fclose(buffer);

	html(stream, title, content);

	free(content);
}

#ifdef TEST
int main (int argc, char *argv[])
{
	page(stdout, "Hello", "World", "How are you?");
}
#endif

