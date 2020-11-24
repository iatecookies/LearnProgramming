#include <iostream>

using namespace std;


int main() {

	int anArray[10] = {0,1,2,3,4,5,6,7,8,9};

    int* anArrayPointer = anArray;

    cout << "First elemeent at :" << anArrayPointer << " has value" << *anArrayPointer << endl;
    cout << "First element at :" << &anArrayPointer[0] << " has value" << anArrayPointer[0] << endl;
    cout << "Second element at : " << anArrayPointer +1 <<" has value " << *(anArrayPointer + 1) << endl;

    cout << "15th (?) element at: " << anArrayPointer + 15 << " has value " << *(anArrayPointer + 15) << endl;

    delete anArrayPointer; //can't with anArray
    anArrayPointer = NULL; //anArray

	//cout << "15th (?) element at: " << anArrayPointer + 15 << " has value " << *(anArrayPointer + 15) << endl;

	//dArray = NULL;
	//cout << dArray[0] << endl; //pointer does not exists, seg fault

	return 0;
}
