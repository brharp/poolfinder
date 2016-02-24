%{
#include "y.tab.h"
%}

DIGIT	[0-9]

%%

"Centennial Pool" {
	printf( "Pool name: %s\n", yytext ); 
	}

"Public swim"|"Family swim"|"Lane swim"|"Women&#8217;s only swim" {
	printf( "Type: %s\n", yytext );
	}

(Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec)[a-z]*" "{DIGIT}+ {
	printf( "Date: %s\n", yytext );
	}

(Sunday|Monday|Tuesday|Wednesday|Thursday|Friday|Saturday) {
	printf( "Weekday: %s\n", yytext );
	}

{DIGIT}+(":"{DIGIT}+(" "[ap]\.m\.)?)?" &#8211; "{DIGIT}+(":"{DIGIT}+(" "[ap]\.m\.)?)? {
	printf( "Time: %s\n", yytext );
	}

\n {}
.  {}

