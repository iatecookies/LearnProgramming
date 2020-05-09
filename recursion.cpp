#include <iostream>

using namespace std;

int fact (int);


void counter (int);
// counter - a recursive function that counts up/down
// @param int - number to be incremented/decrement


int main() {

	int num;
	cout << "Type in an integer: ";
	cin >> num;
	
	counter(num);
	cout << "Fact: " << fact(num) << endl;
	return 0;
}

int fact (int count){

	if (count <= 1){
		return 1;
	}
	else {
		// K(k-1)(k-2) .... 3 x 2 x 1
		
		return (count * fact(count-1));	
		
	
	}
}

void counter (int count){

	if (count >= 1) {
		//counter(count - 1); //reversed order
		cout << "Number: " << count << endl;
		counter(count - 1);
	}

}
