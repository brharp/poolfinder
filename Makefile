
htdocs=/var/www/htdocs
cgi-bin=/var/www/cgi-bin

all: search.cgi cal

cal: cal.c
	cc -g -o $@ $^

search.cgi: main.c template.c swimtab.h
	cc -g -o $@ $^

install: search.cgi cal
	cp *.html $(htdocs)
	cp search.cgi $(cgi-bin)/search
	cp cal $(cgi-bin)/cal

clean:
	rm *.cgi

