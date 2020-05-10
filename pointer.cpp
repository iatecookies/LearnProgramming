#include <iostream>

using namespace std;

/*
pointers is to efficiently access information in memory
accesss, manipulate and how it works, see dynimic memory allocation to see the use of pointers
*/
int main (){
	// pointers - store address of variable
	// (*) ==> dereference operator
	// *p ==> returns value of the variable the pointer is pointing to
	// p ==> returns address of where variable is stored
	// &p ==> returns address of pointer
	// NOT ALLOWED: int *p1, p2, p3; int *p1, *p2, *p3;
	int num = 8,
		*p = &num;
	
	
	cout << "Value: " << *p << endl;
	cout << "Address of Variable: " << &num << endl; //returns adress of value 
	cout << "Address of Variable: " << p << endl;
	cout << "Address of: " << &p << endl;
	
	
	int num1 = 15,
			num2 = 45;
	int *p1 = &num1,
		*p2 = &num2;
		
	cout << "Pointer 1:" << *p1 << endl;
	cout << "Pointer 2: " << *p2 << endl;
	
	/*
	
	*p1 = *p2; // sets value p1 equal to p2, referring to the values that are stored at those addresses
	
	cout << "Pointer 1:" << *p1 << endl;
	cout << "Poitner 2: " << *p2 << endl;
	
	cout << "Num1: " << num1 << endl;// value changed to 45
	cout << "Num2: " << num2 << endl; 
	*/
	
	p1 = p2; //referring to the adresses, pointing to another address
	
	cout << "Pointer 1:" << *p1 << endl;
	cout << "Pointer 2: " << *p2 << endl;
	
	cout << "Num1: " << num1 << endl; // value stays 15
	cout << "Num2: " << num2 << endl;
	
	return 0;
} 
