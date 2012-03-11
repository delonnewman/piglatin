typedef char* string;

typedef struct {
	string  name;
	int    *value;
} Key;

typedef struct {
	Key    *keys;
	string *values;
	int     count;
} Hash;

Hash   Hash_new();
int    Hash_add(hash, string, string);
string Hash_get_value(hash, string);
int    Hash_has_value(hash, string);

string *translate(FILE*);
Hash    create_dictionary(string*);
int     starts_with_vowl(string);
int     starts_with_consonant(string);
string *parse_text(FILE*);
