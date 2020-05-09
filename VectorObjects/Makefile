CC = g++

CompileParms = -c -Wall

OBJS = Student.o obj_vector.o

Opdr: $(OBJS)
	$(CC) $(OBJS) -o obj_vector

Student.o: Student.cpp Student.h
	$(CC) $(CompileParms)  Student.cpp

obj_vector.o: obj_vector.cpp Student.h
	$(CC) $(CompileParms)  obj_vector.cpp

