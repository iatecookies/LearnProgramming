CC = g++

CFLAGS = -c -Wall

all: main

main: main.o cat.o
			$(CC) main.o cat.o -o main

main.o: main.cpp cat.h
			$(CC) $(CFLAGS) main.cpp

cat.o: cat.cpp cat.h
			$(CC) $(CFLAGS) cat.cpp

clean:
	rm *o main

