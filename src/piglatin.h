typedef char *string;

typedef struct {
	char *name;
	int  *value;
} Key;

typedef struct {
	Key   *keys;
	char **values;
	int    count;
} Hash;

Hash   hash_new();
int    hash_add(hash, char*, char*);
char  *hash_get_value(hash, char*);
int    hash_has_value(hash, char*);

char  **translate(FILE*);
Hash    create_dictionary(char**);
int     starts_with_vowl(char*);
int     starts_with_consonant(char*);
string *parse_text(FILE*);
