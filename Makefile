
htdocs=/var/www/htdocs
cgi-bin=/var/www/cgi-bin

all: search.cgi

search.cgi: main.c template.c swimtab.h
	cc -g -o $@ $^

install: search.cgi
	cp *.html $(htdocs)
	cp search.cgi $(cgi-bin)/search

clean:
	rm *.cgi

