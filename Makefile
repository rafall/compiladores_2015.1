# MAKEFILE 
all: compile

compile: arqlex.l 
	lex arqlex.l
	gcc lex.yy.c hashmap.c -o myscanner

clean:
	@rm -rf myscanner
	@rm -rf lex.yy.c
