%{
	/* need this for the call to atof() below */
#include <math.h>
	/* need this for printf(), fopen() and stdin below */
#include <stdio.h>
%}
NUMERO_INT 			-?[1-9][0-9]*
NUMERO_REAL			-?[1-9][0-9]*.[0-9]+
PONTO				\.
PONTOEVIRGULA		;
ATRIBUICAO			:=
DOISPONTOS			:
APARENTESES			\)
FPARENTESES			\(
VIRGULA				,
MAIORIGUAL			>=
MENORIGUAL			<=
DIFERENTE			<>
MENOR				<
MAIOR				>
IGUAL				=
SOMA				'+'
SUBTRACAO			\-
MULTIPLICACAO		'*'
DIVISAO				\/
ID 					[a-z][a-z0-9]*

%%

{NUMERO_INT}		printf("%s - numero_int\n", yytext);
{NUMERO_REAL}		printf("%s - numero_real\n", yytext);
{PONTO}				printf("%s - .\n", yytext);
{PONTOEVIRGULA}		printf("%s - ;\n", yytext);
{ATRIBUICAO}		printf("%s - :=\n", yytext);
{DOISPONTOS}		printf("%s - :\n", yytext);
{APARENTESES}		printf("%s - )\n", yytext);
{FPARENTESES}		printf("%s - (\n", yytext);
{VIRGULA}			printf("%s - ,\n", yytext);
{MAIORIGUAL}		printf("%s - >=\n", yytext);
{MENORIGUAL}		printf("%s - <=\n", yytext);
{DIFERENTE}			printf("%s - <>\n", yytext);
{MENOR}				printf("%s - <\n", yytext);
{MAIOR}				printf("%s - >\n", yytext);
{IGUAL}				printf("%s - =\n", yytext);
{SOMA}				printf("%s - +\n", yytext);
{SUBTRACAO}			printf("%s - -\n", yytext);
{MULTIPLICACAO}		printf("%s - *\n", yytext);
{DIVISAO}			printf("%s - /\n", yytext);
{ID}				printf("%s - ID\n", yytext);
.

"{"[^}\n]*"}"	; 	/* eat up one-line comments */
[ \t\n]+	; 	/* eat up white space */
.
%%

int main(int argc, char *argv[])
{
	++argv, --argc; /* skip over program name */
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	yylex();
}
int yywrap(){return 1;}
