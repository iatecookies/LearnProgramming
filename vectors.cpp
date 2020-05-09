#include <iostream>
#include <vector>


using namespace std;

//function declaration

//arrays are passed by referenced. VECTORS are NOT. ALWAYS pass vectors in by reference. Vectors are very large in memory. If you dont want to tampered with use const vector<int>&
void fillVector(vector<int>&);
// fillVector
// @param vector<int>& - vector to be filled

// not making changes to vector so can use const
void printVector(const vector<int>&);
// printVector
// @param const vector<int>& - vector to be printed

void reverse(const vector<int>&);
// reverse
// @param const vector<int>& - vector to be printed backwards

void printEvens(const vector<int>&);
// printEvens - only prints even numbers in vector
// @param const vector<int>& - vector to be printed

void replace(vector<int>&);
// replace - find the old integer and replaces it
// @param vector<int>& - vector to be replaced


int main () {

/*
    vectors are similar like arrays
    resizes automatically depending if you add any elements to it
    format: vector<DataType> nameOfVector
    myVector.push_back(value) ==> adds an element to the END of the vector (also resizes it)
    myVector.at(index) ==> return element at specified index number
    myVector.size() ==> returns an unsigned int equal top the number of elements
    myVector.begin() ==> reads vector from first element (index 0)
    myVector.insert(myVector.begin() + integer, new value) ==> adds elemnt BEFORE specified index number
    myVector.erase(myVector.begin() + integer) ==> removes element AT specified index number
    myVector.clear() ==> removes all elements in vector
    myVector.empty() ==> returns boolean value if whether vector is empty
*/    

/* -----------------VECTORS------------------------
    vector<int> myVector;

    //adding something in vector
    myVector.push_back(3);
    myVector.push_back(7);
    myVector.push_back(11);
    cout << "Vector: "; 
    //no pos of neg always pos
    for (unsigned int i=0; i< myVector.size(); i++){
        cout << myVector[i] << " " ;
    }
    
    myVector.insert(myVector.begin() + 1 , 4);
    cout << endl << "Vector: ";
    
    //no pos of neg always pos
    for (unsigned int i=0; i< myVector.size(); i++){
        cout << myVector[i] << " " ; 
    }
    
    myVector.erase(myVector.begin() + 1);
    cout << endl << "Vector: ";
    
    //removes the 4 
    for (unsigned int i=0; i< myVector.size(); i++){
        cout << myVector[i] << " " ;
    }
    
    myVector.clear();
    if (myVector.empty()){
        cout << endl << "Is empty";
    } else{
        cout << endl << "Is not empty";
    }
    cout << endl;
*/    
    vector<int> myVector;
    
    fillVector(myVector);
    printVector(myVector);
    reverse(myVector);
    printEvens(myVector);
    replace(myVector);
    return 0;
}


// function definitions
void replace(vector<int>& newMyVector){
    int old, replace;
    
    cout << "Type in a number to be replaces with another number: " << endl;
    
    cin >> old >> replace;
    for (unsigned int i = 0; i < newMyVector.size(); i++){
        if (newMyVector.at(i) == old){
            newMyVector.at(i) = replace;
           
        }
    }
    printVector(newMyVector);
}

void printEvens(const vector<int>& newMyVector){
    cout << "Even vectors: " << endl;
    for(unsigned int i=0;i<newMyVector.size(); i++){
        if ( (newMyVector.at(i) % 2) == 0 ){
            cout << newMyVector.at(i) << endl;
        }
    }
}

void reverse(const vector<int>& newMyVector){
    cout << "Vector reversed: " << endl;
    
    for(unsigned int i=newMyVector.size(); i > 0 ; i-- ) {
        //the size is always greater than the highest subscript. the very last element in array or vector is always one lower than the size. cuz indixes always start at 0
        cout << newMyVector.at(i-1) << endl;
    }
}


void printVector(const vector<int>& newMyVector){
    cout << "Vector printed: " << endl;
    for (unsigned int i =0; i < newMyVector.size(); i++){
        cout << newMyVector.at(i) << endl;
    } 
}

void fillVector(vector<int>& newMyVector){
    
    cout << "Type in a list of numbers: " << endl;
    int input;
    cin >> input;
    
    while (input != -1){
        newMyVector.push_back(input);
        cin >> input;
    }
    cout << endl;
}
