#include <iostream>
#include <string>
#include <vector>
#include "Student.h"


using namespace std;

// function declaration
    // remember pass vector by reference otherwise too large in memory
void fillVector(vector<Student>&);
    // fillVector - fill in student information
    // @param vector<Student>&

void printVector(const vector<Student>&);
    // printVector
    // @param const vector<Student> - print out student information

    
int main() {

/*
Why vectors of object?
    BMI Patient_1
    BMI Patient_2
Only allows specific number of objects the programmer puts in here.

Creating a vector object will give the user the ability to make as many object they want

*/
    //create vector of objects
    vector<Student> myClass;
    fillVector(myClass);
    printVector(myClass);
    return 0;
}


// function definition
void fillVector(vector<Student>& newMyClass){
    string name;
    char grade;
    
    cout << "How many students are in your class?";
    int classSize;
    cin >> classSize;
    
    for (int i = 0; i < classSize; i++){
        cout << "Enter student name: " << endl;
        cin >> name;
        cout << "Enter student grade: " << endl;
        cin >> grade;
        
        //create the object
        Student newStudent(name, grade);
        newMyClass.push_back(newStudent);
        cout << endl;
    }
    cout << endl;
}

void printVector(const vector<Student>& newMyClass){

    unsigned int size = newMyClass.size();
    for (unsigned int i = 0; i < size; i++){
        cout << "Student name: " << newMyClass.at(i).getName() << endl;
        cout << "Student grade: " << newMyClass.at(i).getGrade() << endl;
        cout << endl;
    }
    cout << endl;
}


