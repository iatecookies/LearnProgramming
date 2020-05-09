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
    cout << input.insert(3, last, 1,2);
    // input: juni, output: jun ik i -> juniki
    
    //formatting decimals
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    
    //iomanip manipulate
    // cout << fixed << showpoint << setprecision(2);
    cout << "type in number: " << endl;
    double input;
    
    cin >> input;
    
    cout << input << endl;
    return 0;
}
