char[] translate(char[] text);
hash   create_dictionary(char[] text);
bool   starts_with_vowl(char[] word);
bool   starts_with_consonant(char[] word);
char[] parse_words(char[] text);

struct hash {
	key[]  keys;
	char[] values;
	int    count;
};

stuct key {
	char[] name;
	*int   value;
};

hash   hash_new();
bool   hash_add(hash h, char[] key, char[] value);
char[] hash_get_value(hash h, char[] key);
bool   hash_has_value(hash h, char[] key);

