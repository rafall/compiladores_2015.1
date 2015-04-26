# MAKEFILE 
all: compile

compile: arqlex.l 
	lex arqlex.l
	gcc lex.yy.c hashmap.c -o myscanner

clean:
	@rm -rf myscanner
	@rm -rf lex.yy.c

test:
	./myscanner < example1.txt > saida1.txt
	./myscanner < example2.txt > saida2.txt
	./myscanner < example3.txt > saida3.txt

test1:
	./myscanner < example1.txt > saida1.txt
	cat saida1.txt

test2:
	./myscanner < example2.txt > saida2.txt
	cat saida2.txt

test3:
	./myscanner < example3.txt > saida3.txt
	cat saida3.txt