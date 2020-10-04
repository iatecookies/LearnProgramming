#include <iostream>
//#include "basic.h"

int main(){
	std::cout << "Addition" << basic::add (1,2) << std::endl;
	std::cout << "Subtraction" << basic::sub (4,2) << std::endl;
	return 0;
}


/*
1. Compile the object files with -fPIC (position independent code)
g++ -fPIC -c obj1.cc
2. Link all object files in a shared object with -shared
g++ -shared -fPIC -o libcool.so obj1.o obj2.o
3. Next u can link the library
g++ -L/path/to/lib -I/path/to/include -o test test.cc -lcool


-l libcool is -lcool


g++ -I/home/Documents/OefenPM/libary/linkin -I/home/Documents/OefenPM/libary/linkin -o demo demo.cpp -lreken
OR
//g++ -Wall -c demo.cpp // creates object demo
//g++ -o demo demo.o libreken.so 
//sudo mv libreken.so /usr/lib/
//sudo ldconfig
ldconfig loads dynamic library in memory and when u execute, the dynamic linkin will happen
*/
