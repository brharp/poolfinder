prefix=/var/www
htdocs=$(prefix)/htdocs
cgibindir=$(prefix)/cgi-bin
CFLAGS=-luuid -std=c99

all: search.cgi events

events: events.c aux.c icaldata.c
	$(CC) $(CFLAGS) -g -o $@ $^

search.cgi: main.c template.c icaldata.c aux.c swimtab.h
	cc -g -o $@ $^

install: search.cgi events
	cp *.html $(DESTDIR)$(htdocs)
	cp search.cgi $(DESTDIR)$(cgibindir)/search
	install events $(DESTDIR)$(cgibindir)/events

clean:
	rm *.cgi

SwimScheduleComplete.json: SwimScheduleComplete.csv
	awk -F, -f csv2json.awk < SwimScheduleComplete.csv  > SwimScheduleComplete.json
