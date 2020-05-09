// Header ==> Base/Parent Class

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
using namespace std;

class Triangle {
	public:
		//default constructor
		Triangle();
		
		//Overload constructor
		Triangle(int);
		
		//destructor
		~Triangle();
		
		//Accessor function
		int getHeight() const;
			// getHeight - returns height of triangle
			// @return int - height of triangle
			
		//Mutator function
		void setHeight(int);
			// setHeight - sets height of triangle
			// @param int - height of triangle
			
		//getArea
		double getArea(int) const;
			// getArea - returns are of triangle
			// @param int - base of triangle
			// @return double - are of triangle
		
		
		
	
	private:
		//member variables
		int height;
		
	/*
	protected:
		int height:
	*/
};

#endif

