#include <iostream>

using namespace std;

const int CAPACITY = 1000;

//learn delete de allocate memory, make dynamic array

int main() {

	int *dArray;
	dArray = new int[CAPACITY];
	

	dArray[0] = 3;
	dArray[1] = 7;	
	dArray[2] = 9;
	dArray[3] = 10;
	
	cout << "Array: ";
	
	for (int i=0; i < 4; i++){
		cout << dArray[i] << " "; //notice not use dereference operator
		
	}
	cout << endl;
	
	for (int i=0; i < 4; i++){
		cout << *(dArray+i) << " ";
	}
	cout << endl;
	
	delete [] dArray; //deletes all of the values, pointers still exist and still pointing
	
	//cout << dArray[0] << endl;
	
	dArray = NULL;
	//cout << dArray[0] << endl; //pointer does not exists, seg fault
	
	return 0;
}
