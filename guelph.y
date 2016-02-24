%{
int yylex (void);
void yyerror (char const *);
%}

%token POOLNAME
%token SWIMTYPE
%token DATE
%token TIME
%token DOW

%%

schedules:
	/* empty */
|	schedule pool
;

pool:
	POOLNAME DATE DATE swimtimes { printf("pool: %s (%s to %s)\n", $1, $2, $3:
;

swimtimes:
	swimtime
|	swimtimes swimtime
;

swimtime:
	SWIMTYPE dayschedules
;

dayschedules:
	dayschedule
|	dayschedules dayschedule
;

dayschedule:
	DOW times
;

times:
	TIME
|	times TIME
;


