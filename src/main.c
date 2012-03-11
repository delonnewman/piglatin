#include <stdio.h>
#include "piglatin.h"

int main(int argc, char** argv)
{
	string* words;
	words = parse_text(stdin);
	printf("parsed %d words\n", sizeof(words));
	printf("a word %s", words);
	for ( int i = 0; i < sizeof(words); i++ ) {
		printf("word: %s", words[i]);
	}

	return 0;
}
