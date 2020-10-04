#include "Isosceles.h"

//Default constructor
Isosceles::Isosceles(){
	base = 0;
}


// how do we get the height? by using inheritance. Inherit overloaded function.
// avoid protected keword -> see mutator
// Overload constructor
Isosceles::Isosceles(int newBase, int newSideOne, int newHeight)
	: Triangle(newHeight){
	base = newBase;
	sideOne = newSideOne;
	//height = newHeight if use protected or public
}

// Destructor
Isosceles::~Isosceles(){

}

// Accessor Function
int Isosceles::getBase() const{
	return base;
}
	
int Isosceles::getSideOne() const{
	return sideOne;
}
	
	
//Mutator function
void Isosceles::setBase(int newBase){
	base = newBase;
}
	
void Isosceles::setSideOne(int newSideOne){
	sideOne = newSideOne;
	
}

int Isosceles::getPerimeter() const{
	return ((2 * sideOne) + base);
	
}
void Isosceles::printInfo() const{

	// notice you use getArea from Triange.cpp
	cout << endl << "Perimeter: " << getPerimeter() << endl;
	cout << "Area: " << getArea(base) << endl;
}
