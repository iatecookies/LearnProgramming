#include <iostream>

#include <string>

using namespace std;




//function declaration

void welcomeMessage();


int bereken(int, int);
//bereken - vermenigvuldig twee integers
//@return int


double divide(int&, int&);
//@param int& - number to divide

void askUserName(string&);
// askUsername - sets name of user
// @param string& - name of user

int askUserScore();
// askUserScore - sets credit score of user
// @return int - credit score of user

void print(string, int);
// print - prints whether user is in good standing
// @param string - name of user
// @param int - credit score of user


int main() {
    //welcomeMessage();
    
    //cout << bereken(4,5) << "\n";
   
    int a = 6;
    int b = 3;
    
    cout << divide (a,b) <<  endl;
    cout << "a:" << a << "b" << b << endl;
    
    
    
    string name;
    askUserName(name);
    //function as parameters
    print(name, askUserScore());
    return 0;
}


//function definitions
void welcomeMessage() {

    cout << "Hello world" << endl;
}


// call by value
int bereken(int x, int y){
    int result = x * y;
    return result;
}

// call by reference
double divide(int& x, int& y){
    cout << "Before -> x:" << x << "y" << y << endl;
    x--;
    y--;
    cout << "After -> x:" << x << "y" << y << endl;
    
    return (static_cast<double>(x) /y);
    //output 2.5
}   

//functions as parameters

void askUserName(string& newName){
    cout << "Enter your name: ";
    cin >> newName;
    cout << endl;
}

int askUserScore(){
    int score;
    cout << "Enter credit score:" ;
    cin >> score;
    cout << endl;
    return score;
}

void print(string newName, int newScore) {
    if (newScore < 50){
    
        cout << newName << " Failed" << endl;
    }
    else {
    
        cout << newName << " Pass" << endl;
    }
}

