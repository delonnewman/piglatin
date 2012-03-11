typedef char *string;

typedef struct {
	string  name;
	int    *value;
} Key;

typedef struct {
	Key    *keys;
	string *values;
	int     count;
} Hash;

Hash   hash_new();
int    hash_add(hash, char*, char*);
string hash_get_value(hash, char*);
int    hash_has_value(hash, char*);

string *translate(FILE*);
Hash    create_dictionary(char**);
int     starts_with_vowl(char*);
int     starts_with_consonant(char*);
string *parse_text(FILE*);
