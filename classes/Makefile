CC = g++

CFLAGS = -c -Wall -Wextra -Wpedantic -std=c++11

OBJS = object.o BMI.o

all: $(OBJS)
	$(CC) $(OBJS) -o object
	
object.o: object.cpp BMI.h
	$(CC) $(CFLAGS) object.cpp

BMI.o: BMI.cpp BMI.h
	$(CC) $(CFLAGS) BMI.cpp

clean:
		rm *o object
