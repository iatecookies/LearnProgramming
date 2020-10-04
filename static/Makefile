CC = g++

CFLAGS = -c -Wall

all: main

main: rand.o bank.o
			$(CC) rand.o bank.o -o rand

rand.o: rand.cpp bank.h
			$(CC) $(CFLAGS) rand.cpp

bank.o: bank.cpp bank.h
			$(CC) $(CFLAGS) bank.cpp

clean:
		rm *o rand

