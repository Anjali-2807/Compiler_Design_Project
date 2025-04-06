%{
#include "ir.h"
#include "codegen.h"
#include <stdio.h>
void yyerror(const char *s);
int yylex(void);
%}

%union {
    int ival;
    double fval;
}

%token <ival> INTEGER
%token <fval> FLOAT
%token FINANCE_COMPOUND

%type <ival> compounding_frequency time_periods
%type <fval> principal interest_rate

%%

instruction:
    FINANCE_COMPOUND '(' principal ',' interest_rate ',' compounding_frequency ',' time_periods ')'
    {
        FinanceCompoundNode* node = createFinanceCompoundNode($3, $5, $7, $9);
        generateCode(node);
        free(node);
    }
    ;

principal:
    FLOAT { $$ = $1; }
    | INTEGER { $$ = (double)$1; }
    ;

interest_rate:
    FLOAT { $$ = $1; }
    | INTEGER { $$ = (double)$1; }
    ;

compounding_frequency:
    INTEGER { $$ = $1; }
    ;

time_periods:
    INTEGER { $$ = $1; }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(void) {
    yyparse();
    return 0;
}