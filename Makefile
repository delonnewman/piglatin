.PHONY: all clean doc

CC=gcc
flags=-Wall -std=c99

all: piglatin

piglatin: src/piglatin.o
	$(CC) $(flags) -o piglatin src/main.c src/piglatin.o

src/piglatin.o:
	$(CC) $(flags) -o src/piglatin.o -c src/piglatin.c

clean:
	rm bin/piglatin
	rm src/piglatin.o

doc:
	md2man README.md > piglatin.1
