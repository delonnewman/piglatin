stuct key {
	char[] name;
	int*   value;
};

struct hash {
	key*   keys;
	char** values;
	int    count;
};

hash   hash_new();
bool   hash_add(hash h, char[] key, char[] value);
char[] hash_get_value(hash h, char[] key);
bool   hash_has_value(hash h, char[] key);

char** translate(FILE* file);
hash   create_dictionary(char** words);
bool   starts_with_vowl(char* word);
bool   starts_with_consonant(char* word);
char** parse_text(FILE* file);
