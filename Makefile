CC=clang
CFLAGS=-W -Wall -g

all: myutils.o bitoperations.o
	$(CC) $(CFLAGS) myutils.o bitoperations.o -o bitoperations

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

myutils.o: myutils.c myutils.h
	$(CC) $(CFLAGS) -c myutils.c

clean:
	rm *.o bitoperations
