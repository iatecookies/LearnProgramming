// Header ==> Derived/Child Class

//notice in inherit.cpp didnt include the parent class, if you include the child which includes the parents. you dont need parent
 
#ifndef ISOSCELES_H
#define ISOSCELES_H

#include <iostream> //dont need cuz triangle.h
#include "Triangle.h"
using namespace std; // dont need cuz triangle.h


//this is how you inherit public functions of base class Triangle
class Isosceles : public Triangle {
	public:
		// Default constructor
		Isosceles();
		
		// Overload constructor
		Isosceles(int, int, int);
		
		// Destructor
		~Isosceles();
		
		// Accessor Function
		int getBase() const;
			// getBase - returns base of triangle
			// @return int - base length of triangle
			
		int getSideOne() const;
			// getSideOne -
			// @return int -
			
			
		//Mutator function
		void setBase(int);
			// setBase - sets base length of triangle
			// @param int - base length of triangle
			
		void setSideOne(int);
		
		int getPerimeter() const;
			// getPerimeter - returns perimeter of triangle
			// @return int - perimeter of triangle
			
		void printInfo() const;
			// printInfo - prints the perimeter and area of triangle
		
	private:
		// member variables
		int base;
		int sideOne;


};

#endif

