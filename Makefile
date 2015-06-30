
htdocs=/var/www
cgi-bin=/usr/lib/cgi-bin

all: install

search.cgi: main.c template.c 
	cc -g -o $@ $^

install: search.cgi
	cp *.html $(htdocs)
	cp search.cgi $(cgi-bin)/search

clean:
	rm *.cgi

