
htdocs=/var/www
cgi-bin=/usr/lib/cgi-bin

all: search.cgi

search.cgi: main.c template.c swimtab.h
	cc -g -o $@ $^

install: search.cgi
	cp *.html $(htdocs)
	cp search.cgi $(cgi-bin)/search

clean:
	rm *.cgi

