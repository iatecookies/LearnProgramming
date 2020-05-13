#include <iostream>

using namespace std:

template <class T>
class Bucky{
	T first, second;
	public:
		Bucky(T a, T b){
			first = a;
			second = b;
		
		}
		T bigger();
		
	private:
	
};


//?then return first else secon
template <class T>
T Bucky<T>::bigger(){				
	return (first>second?first:second);
}



int main (){
	Bucky <int> bo(69, 103);	// work with different objects, every T is int now
	
	cout << bo.biger();
	return 0;
}
