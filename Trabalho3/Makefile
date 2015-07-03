# MAKEFILE 
all: compile

compile:
	yacc -d arqyacc.y
	lex arqlex.l
	gcc lex.yy.c y.tab.c hashmap.c symbols.c -o myscanner

clean:
	@rm -rf myscanner
	@rm -rf lex.yy.c
	@rm -rf saida1.txt
	@rm -rf saida2.txt
	@rm -rf saida3.txt
	@rm -rf y.tab.c
	@rm -rf y.tab.h

test:
	./myscanner < example.txt > saida1.txt
	./myscanner < example2.txt > saida2.txt
	./myscanner < example3.txt > saida3.txt

test1:
	./myscanner < example.txt > saida1.txt
	cat saida1.txt

test2:
	./myscanner < example2.txt > saida2.txt
	cat saida2.txt

test3:
	./myscanner < example3.txt > saida3.txt
	cat saida3.txt