// Header ==> Function Declarations


#include <iostream> 
#include <string>

using namespace std;

#ifndef BMI_H // om te voorkomen dat dit .h bestand meerdere keren
#define BMI_H // wordt ge-include 


class BMI {

    // access modifiers
    
    public:
        //Default constructors: only sets your member variables to their null states
        BMI();
        
        //Overload constructor: different way of calling the same function. to make overloaded add parameters
        BMI(string, int, double);
        
        
        //Destructor: once you're done with the object, its destroyed out of memory
        ~BMI();
        
        //Accessor functions
        //if you have a function that is not going to be modified any membervariables of the class. use const
        string getName() const;
            // getName - return name of patient     
            // @return string - name of student
            
        int getHeight() const;
            // getHeight - return height of patient
            // @return int - height of student
            
        double getWeight() const;
            // getWeight - return weight of patient
            // @return double - weight of student
            
        //Mutator functions
        void setName(string);
            // setName - sets name of patient
            // @param string - name of patient
        
        void setHeight(int);
            // setHeight - sets height of patient
            // @param int - height of patient
        
        void setWeight(double);
            // setWeight - sets weight of patient
            // @param double - weight of patient
        
        double calculateBMI();
            // calculateBMI - calculates BMI
            // doesnt need param cuz of member variables
            // @return double - BMI of student
    private:
        // member variables
        string newName;
        int newHeight;
        double newWeight;
        
};

#endif
