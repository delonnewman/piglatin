#include <stdio.h>
#include "piglatin.h"

hash create_dictionary(char** words)
{
	hash dict;
	return dict;
}

char** parse_text(FILE* file)
{
	char** words;

	char* word;
	while ( (c = getc(file)) != EOF ) {
		
	}


	return words;
}

char** translate(FILE* file)
{
	char** trans;
	char** words = parse_text(file);
	hash   dict  = create_dictionary(words);

	return trans;
}


