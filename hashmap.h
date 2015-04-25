#define HASHMAP_SIZE 400
#define PRIME_NUMBER 31
#define DEBUG 0
#define TOKEN_MAX_SIZE 10

typedef struct {
	char* element;
} hashmap;

hashmap* hashTable;

// Protótipos das funções
int initTable();
int getHashCode(char* );
int addElement(char* );
int searchElement(char* );
