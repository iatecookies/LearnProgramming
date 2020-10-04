CC = g++

CFLAGS = -c -Wall

all: main

main: inherit.o Triangle.o Isosceles.o
			$(CC) inherit.o Triangle.o Isosceles.o -o inherit

inherit.o: inherit.cpp Isosceles.h
			$(CC) $(CFLAGS) inherit.cpp

Triangle.o: Triangle.cpp Triangle.h
			$(CC) $(CFLAGS) Triangle.cpp

Isosceles.o: Isosceles.cpp Isosceles.h
			$(CC) $(CFLAGS) Isosceles.cpp
			
clean:
		rm *o inherit
