
htdocs=/var/www
cgi-bin=/usr/lib/cgi-bin

all: install

search.cgi: main.c places.h pools.h types.h days.h swimtab.h
	cc -g -o $@ $<

install: search.cgi
	cp *.html $(htdocs)
	cp search.cgi $(cgi-bin)/search


