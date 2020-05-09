#include <iostream>

using namespace std;


//continuation of pointer.cpp. see dyna.cpp to see how to delete manually
//pointers as parameters

int* print(int*);
// print - prints the value a pointer is pointing to
// @param int* - pointer that is pointing to an integer
// return int* - 

void print1(int*);
// print - prints the value a pointer is pointing to
// @param int* - pointer that is pointing to an integer

int main() {
	int *p1;
	p1 = new int; // point to an unknown integer
	
	*p1 = 45;
	
	print(p1); // never need to use special chars *, & or const
	cout << endl;
	print1(p1);
	return 0;

}

void print1(int *pointer){


	cout << "Pointer 1: " << *pointer << endl;

}

int* print (int *pointer){


	cout << "Pointer 1: " << *pointer << endl;
	
	return pointer; // no need to deference
}
