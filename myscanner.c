#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yylineno;
extern char* yytext;

int int main(int argc, char const *argv[])
{
	int ntoken, vtoken;

	ntoken = yylex();
	while(ntoken)
	{
		printf("yey - %s\n", yytext);
		ntoken = yylex();
	}
	return 0;
}