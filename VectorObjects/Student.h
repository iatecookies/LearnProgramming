//Header

#ifndef STUDENT_H // om te voorkomen dat dit .h bestand meerdere keren
#define STUDENT_H // wordt ge-include 


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
    public:
        // default construct
        Student();
        
        // overload constructor
        Student(string, char);
        
        // destructor
        ~Student();
        
        // Accessor functions
        string getName() const;
            // getName
            // @return string - name of string
            
        char getGrade() const;
            // getGrade
            // @return char - grade of student
        
        
        // Mutator functions
        
        void setName(string);
            // setName
            // @param string - name of student
            
        void setGrade(char);
            // setGrade
            // @param char - grade of student
    
    private:
        // member variables
        string newName;
        char newGrade;


};
#endif
