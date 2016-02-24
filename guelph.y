%{
int yylex (void);
void yyerror (char const *);
char *pool_name,
     *start_date,
     *end_date,
     *swim_type,
     *day_of_week,
     *start_time,
     *end_time;
%}

%token POOLNAME
%token SWIMTYPE
%token DATE
%token TIME
%token DOW

%%

pools:
	pool
|	pools pool
;

pool:
	POOLNAME DATE DATE schedules {
		pool_name  = strdup($1);
		start_date = strdup($2);
		end_date   = strdup($3);
    }
;

schedules:
	schedule
|	schedules schedule
;

schedule:
	SWIMTYPE days { swim_type = strdup($1); }
;

days:
	day
|	days day
;

day:
	DOW times { day_of_week = strdup($1); }
;

times:
	time
|	times time
;

time:
	TIME TIME {
		printf("%s %s %s %s %s %s %s\n", pool_name, start_date, end_date,
			swim_type, day_of_week, $1, $2);
    }
;

