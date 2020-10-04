#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

// formatting decimals, insert into string

int main() {
    cout << "Hello world" << endl;
    string input;
    getline(cin, input);
    string last = "dik";
    // insert (index, string, start, length)
    cout << input.insert(3, last, 1,2) << endl;
    // input: juni, output: jun ik i -> juniki
     
    //formatting decimals
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    
    //iomanip manipulate
    // cout << fixed << showpoint << setprecision(2);
    cout << "type in number: " << endl;
    double input2;
    
    cin >> input2;
    
    cout << input2 << endl;
    
    // add '\0' or else undefined behaviour. char is not null terminated
    char name[] = "Cherno";
    char name2[7] = {'C', 'h', 'e', 'r', 'n', 'o', '\0'};
    std::cout << name2 << std::endl;
    name[2] = 'a';
    
    std::cout << name << std::endl;
    return 0;
}
