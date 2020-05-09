#include <iostream>
#include "Isosceles.h"


//triangle is your base class
using namespace std;

int main () {
	int base, height, equalSide;
	
	cout << "Please type in a base length: " ;
	cin >> base;
	cout << "Please type in the height: ";
	cin >> height;
	cout << "Please type in the side that is equal: ";
	cin >> equalSide;
	
	Isosceles myTriangle(base, equalSide, height);
	/*
	myTriangle.height = 5;
	
	height in public but bad coding, u can also use protected to access height
	main doesnt inherit from it
	*/
	cout << endl;
	myTriangle.printInfo();
	return 0;
	
	

}
