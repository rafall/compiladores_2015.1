#define HASHMAP_SIZE 400
#define PRIME_NUMBER 31
#define DEBUG 0

typedef struct {
	char* element;
} hashmap;

hashmap* hashTable;

int initTable();
int getHashCode(char* );
int addElement(char* );
int searchElement(char* );
