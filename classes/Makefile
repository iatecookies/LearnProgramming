CC = g++

CompileParms = -c -Wall

OBJS = BMI.o object.o

Opdr: $(OBJS)
	$(CC) $(OBJS) -o object

BMI.o: BMI.cpp BMI.h
	$(CC) $(CompileParms) BMI.cpp

object.o: object.cpp BMI.h
	$(CC) $(CompileParms) object.cpp
	
#uit algo maar kijk makefile(learn) gebruikt zelfde principe
