%{
#include "parser.tab.h"
%}

%option noyywrap

%%

"FINANCE_COMPOUND" { return FINANCE_COMPOUND; }
[0-9]+             { yylval.ival = atoi(yytext); return INTEGER; }
[0-9]*\.?[0-9]+    { yylval.fval = atof(yytext); return FLOAT; }
[ \t\r\n]+         { /* Ignore whitespace */ }
.                  { return yytext[0]; }

%%