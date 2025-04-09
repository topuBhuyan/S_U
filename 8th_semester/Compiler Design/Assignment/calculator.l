%{
#include "calculator.tab.h"
#include <stdlib.h>
%}

%%
[0-9]+      { yylval = atoi(yytext); return INTEGER; }
"+"         { return PLUS; }
"-"         { return MINUS; }
"*"         { return MULTIPLY; }
"/"         { return DIVIDE; }
"("         { return LPAREN; }
")"         { return RPAREN; }
[ \t]       ; /* Skip whitespace */
\n          { return EOL; }
.           { return ERROR; }
%%

int yywrap(void) { return 1; }