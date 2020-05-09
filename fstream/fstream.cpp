#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*reading and writing files to stream */

int main(){
	ifstream infile; //input for filestream
	ofstream outfile;
	
	infile.open("list.txt");
	outfile.open("sample.txt");
	
	//Check for error. If if exists
	if (infile.fail() ){
		cerr << "Error Opening file" << endl;
		exit(1);
	}
	
	int x, y;
	infile >> x >> y;
	
	cout << "Num 1: " << x << endl;
	cout << "Num 2: " << y << endl;
	
	string item;
	int count = 0;
	

	//read file unti you've reached the end
	while (!infile.eof()) {
		infile >> item;
		if (item == "orange"){
			outfile << item << endl;	//writing
			count++;
		}
	}
	
	
	cout << count << " instances of oranges" << endl;
	outfile << "First Number: " << 6 << endl;
	
	outfile.close();
	infile.close();
	return 0;

}
