.PHONY: all

CC=gcc
flags=-Wall

all: bin/piglatin

bin/piglatin: src/piglatin.o
	$(CC) $(flags) -o bin/piglatin src/main.c src/piglatin.o

src/piglatin.o:
	$(CC) $(flags) -o src/piglatin.o src/piglatin.c
