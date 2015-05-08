
htdocs=/var/www
cgi-bin=/usr/lib/cgi-bin

all: install

search.cgi: main.c places.h pools.h types.h days.h swimtab.h
	cc -o $@ $<

install: search.cgi
	cp index.html $(htdocs)
	cp search.cgi $(cgi-bin)/search


