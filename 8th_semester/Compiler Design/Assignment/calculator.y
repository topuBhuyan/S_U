%{
#include <stdio.h>
#include <stdlib.h>
int yylex(void);
void yyerror(char *);
%}

%token INTEGER PLUS MINUS MULTIPLY DIVIDE LPAREN RPAREN EOL ERROR

%left PLUS MINUS
%left MULTIPLY DIVIDE
%left UMINUS

%%

input:      /* empty */
            | input line
;

line:       EOL
            | exp EOL { printf("= %d\n", $1); }
            | error EOL { yyerrok; }
;

exp:        INTEGER { $$ = $1; }
            | exp PLUS exp { $$ = $1 + $3; }
            | exp MINUS exp { $$ = $1 - $3; }
            | exp MULTIPLY exp { $$ = $1 * $3; }
            | exp DIVIDE exp { 
                  if($3 == 0) {
                      yyerror("Division by zero");
                      YYABORT;
                  }
                  $$ = $1 / $3; 
              }
            | LPAREN exp RPAREN { $$ = $2; }
            | MINUS exp %prec UMINUS { $$ = -$2; }
;

%%

void yyerror(char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    printf("Tofayel Ahamd Tofo \n ID: CSE2202026024\n");
    printf("\nSimple Arithmetic Calculator\n");
    printf("Enter expressions or press Ctrl-D/C to exit\n");
    yyparse();
    return 0;
}