#include <iostream>
#include "cat.h"

/*making a library */
using namespace libCat;

int main () {

	std::cout<<"Hello" << std::endl;
	
	libCat::saySomething();
	libCat::Cat link;
	
	link.speak();
	return 0;

}
