 #Tutorial makefile

#method1: just the simple command
g++ object.cpp BMI.cpp -o objecct

#//if you have error makefile. missing seperator. stop then check indenting TABS instead of space

#method2:using target
all:
	g++ object.cpp BMI.cpp -o object

#method3: using target and clean
all: main

main: object.o BMI.o
		g++ object.o BMI.o -o object

object.o: object.cpp
		g++ -c object.cpp

BMI.o: BMI.cpp
		g++ -c BMI.cpp

clean:
		rm *o object
		
#method4: Declare the variable. less tedious work. Dont forget to include header
CC = g++

CFLAGS = -c -Wall

all: main

main: object.o BMI.o
			$(CC) object.o BMI.o -o object

object.o: object.cpp BMI.h
			$(CC) $(CFLAGS) object.cpp

BMI.o: BMI.cpp BMI.h
			$(CC) $(CFLAGS) BMI.cpp

clean:
		rm *o object

 
#method5: more warnings, objects sorted

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

#method 6: zie prt 

