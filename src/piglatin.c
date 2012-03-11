#include <stdio.h>
#include <regex.h>
#include "piglatin.h"

string * parse_text(FILE* file)
{
	string words[100];

	int   i = 0, j = 0;
	char  c;
	string word = "";
	while ( (c = getc(file)) != EOF ) {
		switch (c) {
		case ' ':
			if ( sizeof(word) > 0 ) {
				i = 0;
				words[j] = word;
				j++;
			}
			else puts("space");
			break;
		case '.', '!', '?', ',', '#', '(', ')', '+', '-':
			/* ignore these to start */
			break;
		default:
			if ( sizeof(word) > 0 ) printf("char: %c and word\n", c);
			else {
				word[i] = c;
				i++;
			}
			break;
		}
	}

	return words;
}
