/*
* SCC0217 Linguagens de programação e compiladores
* Professor Diego Raphael Amancio
* Trabalho 1: Analisador Léxico
*********************************************************
* Alunos:
* 
* Guilherme Barranco Piva					nUSP: 7696462
* Guilherme Lustri de Oliveira				nUSP: 7656492
* Rafael Hiroki de Figueiroa Minami			nUSP: 7573187
*********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashmap.h"
#include "y.tab.h"

extern int yylex(); 
extern int yylineno;
extern char *yytext;

// Inicializa a hashTable alocando espaço
int initTable() 
{

	hashTable = (hashmap*) malloc (HASHMAP_SIZE*sizeof(hashmap));
	int i;
	for(i = 0; i < HASHMAP_SIZE; i++)
	{
		hashTable[i].element = NULL;
	}

	FILE* fp;
	char* word;
	word = (char*) malloc (TOKEN_MAX_SIZE*sizeof(char));
	// Abre o arquivo que contém as palavras reservadas
	fp = fopen("palavras_reservadas.txt", "r");
	// Verifica se conseguiu abrir
	if(fp == NULL)
	{
		printf("ERRO: Não conseguiu ler o arquivo\n");
		return 1;
	}
	
	if(DEBUG) printf("Inicializando\n");

	// Lê todas as palavras e guarda no hashmap
	while(!feof(fp))
	{
		fgets(word, TOKEN_MAX_SIZE, fp);
		
		// É necessário apagar o \n que ele lê
		// se não apagar, o código hash sai diferente
		if(0 < strlen(word) && '\n' != word[0])
        {
            word[strlen(word) - 1] = '\0';
        }
		if(DEBUG) printf("Leu: %s\n", word);
		if(DEBUG) printf("Que tem tamanho: %lu\n", strlen(word));
		// Adiciona a palavra no hashmap e verifica se deu certo
		if(addElement(word))
		{
			return 1;
		}
	}
	
	fclose(fp);
	return 0;
}

// Passa a palavra pelo algoritmo para gerar o numero do hash dela
// retorna esse numero
int getHashCode(char* s)
{
	int hash = 0;
	int i;
	// Aplica o hash na palavra para obter o código dela
	for (i = 0; i < strlen(s); i++)
	    hash = (PRIME_NUMBER * hash + s[i]) % HASHMAP_SIZE;

	if(DEBUG) printf("Hash Code de %s eh %d\n", s, hash);

	return hash;
}

// Adiciona elemento na tabela hash
// chama a função getHashCode que retorna o codigo hash de acordo
// com a string passada. Verifica se aquela posição já foi ocupada.
// Se não foi, adiciona na tabela
int addElement(char* s)
{
	int hash;
	hash = getHashCode(s);
	if(hashTable[hash].element != NULL)
	{
		printf("ERROR: Colision. This hash already exists!\n");
		return 1;
	}

	hashTable[hash].element = (char*) malloc (strlen(s)*sizeof(char));
	strcpy(hashTable[hash].element, s);
	assignID(hash);
	if(DEBUG) printf("%s adicionado. Hash = %d\n", hashTable[hash].element,hash);

	return 0;
}

void assignID(int h)
{
	if(!strcmp(hashTable[h].element,"begin"))
	{
		hashTable[h].id = T_BEGIN;
	}
	else if (!strcmp(hashTable[h].element,"const"))
	{
		hashTable[h].id = T_CONST;	
	}
	else if (!strcmp(hashTable[h].element,"do"))
	{
		hashTable[h].id = T_DO;	
	}
	else if (!strcmp(hashTable[h].element,"else"))
	{
		hashTable[h].id = T_ELSE;
	}
	else if (!strcmp(hashTable[h].element,"end"))
	{
		hashTable[h].id = T_END;
	}
	else if (!strcmp(hashTable[h].element,"for"))
	{
		hashTable[h].id = T_FOR;
	}
	else if (!strcmp(hashTable[h].element,"if"))
	{
		hashTable[h].id = T_IF;
	}
	else if (!strcmp(hashTable[h].element,"integer"))
	{
		hashTable[h].id = T_INTEGER;
	}
	else if (!strcmp(hashTable[h].element,"procedure"))
	{
		hashTable[h].id = T_PROCEDURE;
	}
	else if (!strcmp(hashTable[h].element,"program"))
	{
		hashTable[h].id = T_PROGRAM;
	}
	else if (!strcmp(hashTable[h].element,"read"))
	{
		hashTable[h].id = T_READ;
	}
	else if (!strcmp(hashTable[h].element,"real"))
	{
		hashTable[h].id = T_REAL;
	}
	else if (!strcmp(hashTable[h].element,"then"))
	{
		hashTable[h].id = T_THEN;
	}
	else if (!strcmp(hashTable[h].element,"to"))
	{
		hashTable[h].id = T_TO;
	}
	else if (!strcmp(hashTable[h].element,"var"))
	{
		hashTable[h].id = T_VAR;
	}
	else if (!strcmp(hashTable[h].element,"while"))
	{
		hashTable[h].id = T_WHILE;
	}
	else if (!strcmp(hashTable[h].element,"write"))
	{
		hashTable[h].id = T_WRITE;
	}
}

// Busca o token que foi lido como ID no Flex
// Se encontrar na tabela hash, ele imprime o token
// Senão, ele diz que é um ID
int searchElement(char* s)
{
	int hash = getHashCode(s);
	if(hashTable[hash].element != NULL && !strcmp(hashTable[hash].element, s))
	{
		printf("%s - %s ID: %d\n", s, hashTable[hash].element, hashTable[hash].id);
		return hashTable[hash].id;
	}
	else
	{
		printf("%s - ID\n", s);
		return T_ID;
	}
}