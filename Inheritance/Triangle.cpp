#include "Triangle.h"

//Default constructor
Triangle::Triangle(){
	height = 0;

}

//overload triangle
Triangle::Triangle(int newHeight){
	height = newHeight;
}


//destructor
Triangle::~Triangle(){
}

//accessor function
int Triangle::getHeight() const{
	return height;
}


//mutator function
void Triangle::setHeight(int newheight){
	height = newheight;
}
		
double Triangle::getArea(int base) const{
	// how to get the base?
	return (0.5 * base * height);
}
