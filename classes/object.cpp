#include <iostream>
#include <string>


#include "BMI.h"

/*
basic how to make class, header, use getters and setters

*/


using namespace std;

int main () {


    string name;
    int height;
    double weight;
    
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Enter your height" << endl; 
    cin >> height;
    cout << "Enter you weight" << endl;
    cin >> weight;
    
    //create object, automatically use default constructor: BMI Student_1
    // to use overloaded constructor use: BMI Student_1(name, height, weight);
    
    /*BMI Student_1(name, height, weight);
    
    cout << "Patient Name: " << Student_1.getName() << endl;
    cout << "Height: " << Student_1.getHeight() << endl;
    cout << "Weight: " << Student_1.getWeight() << endl;
    */
    
    //use default constructor
    // how to set it? use mutator functions BMI.cpp
    BMI Student_2;
    
    Student_2.setName(name);
    Student_2.setHeight(height);
    Student_2.setWeight(weight);
    
    cout << "Patient Name: " << Student_2.getName() << endl;
    cout << "Height: " << Student_2.getHeight() << endl;
    cout << "Weight: " << Student_2.getWeight() << endl;
    
    // function that returns
    cout << "BMI: " << Student_2.calculateBMI() << endl;
    return 0;
}
