/*
Template is simple and yet very powerful tool in c++
Templates are the foundation of generic programming, which involvs writing code in a way that is independent of any particular type
A template is a blueprint or formula for creating a generic class or a function.
2 types
    function template and class template
    
    
Sometimes , you need a class implementation that is same for all classes, only the data types used are different.
Normally, you would need to create a different class for each data type OR create different member variables and functions within a single class.

In Class templates we write a class that can be used for different data types.
    
    
    
class Stack{
    public:
        int arr[5];
    private:
        push:
        pop;
};

class Stack{
    public:
        char arr[5];
    private:
        push:
        pop;
};
*/  


#include <iostream>
using namespace std;

template <typename T, typename U>
classs Weight{

    private:
        T kg;
    public
        void setData(T x, U y){
            kg =x ;
            grams=y;
        }
        T getData(){
            return kg;
        }
        U getGramData(){
            return grams;
        }
};

int main () {
    Weight <int, double>obj1;
    obj1.setData(5, 3.5);
    cout << "Value is: " << obj1.getData() << endl;
    cout << "Gram value is: " << obj1.getGramData() << endl;
    
    
    Weight <double> obj2;
    obj2.setData(5.41321);
    cout << "Value is: " <<obj.getData()<<endl;

    return 0;
}
