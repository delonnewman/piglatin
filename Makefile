.PHONY: all clean

CC=gcc
flags=-Wall -std=c99

all: bin/piglatin

bin/piglatin: src/piglatin.o
	$(CC) $(flags) -o bin/piglatin src/main.c src/piglatin.o

src/piglatin.o:
	$(CC) $(flags) -o src/piglatin.o -c src/piglatin.c

clean:
	rm bin/piglatin
	rm src/piglatin.o
