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

// int main () {

// 	initTable();

// 	return 0;
	
// }

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

	fp = fopen("palavras_reservadas.txt", "r");
	
	if(fp == NULL)
	{
		printf("ERROR: Não conseguiu ler o arquivo\n");
		return 1;
	}
	
	if(DEBUG) printf("Inicializando\n");

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
	if(DEBUG) printf("Elemento %s adicionado\n", hashTable[hash].element);

	return 0;
}

// Busca o token que foi lido como ID no Flex
// Se encontrar na tabela hash, ele imprime o token
// Senão, ele diz que é um ID
int searchElement(char* s)
{
	int hash = getHashCode(s);
	if(hashTable[hash].element != NULL && !strcmp(hashTable[hash].element, s))
	{
		printf("%s - %s\n", s, hashTable[hash].element);
		return 0;
	}
	else
	{
		printf("%s - ID\n", s);
		return 1;
	}
}