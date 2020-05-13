/*
template <typename T> template parameter
void swap(T &a, T&b){   // T's scope begins here...
    T temp (a);
    a = b;
    b = temp;

}                       // and ands here

int i, j;
string s, t;
float *p, *q;

swap (i,j); // calls swap<int>(i,j)
swap (s,t); // calls swap<string>(s,t)
swap (p,q); // calls swap<float *>(p,q)
swap (i,s); // error

**You can have more than 1 template parameter

template <typename II, typenamte T>
II find(II first, II last, T const &v);





*/

#include <iostream>

template <typename T>
int max(T const &a, T const &b){
    return a > b ? a : b;

} // max


template <typename T>
class Lijst{
    public:
        ~Lijst();
        void voegtoe(T const &nieuw);
        T max(T const &a, T const &b);
    private:
        T data[500];
        int laatste;
}; // Lijst

template <typename T>
Lijst<T>::~Lijst(){


} // Destructor

template <typename T>
void Lijst<T>::voegtoe(T const &nieuw){
    data[laatste++] = nieuw;
    
    
    
} // Lijst::voegtoe

template <typename T>
T Lijst<T>::max(T const &a, T const &b){
    return a > b ? a : b;

} // max



int main(int , char* []){
    int a = 4, b = 5;
    float c = 4.3, d =4.4;
    
    std::cout << max<int> (a,b) << std::endl
                << max<float> (c,d) << std::endl
                << max<int>(c,d) << std::endl; // hier stiekem gaat het nog goed
                
    Lijst<float> lijst;
    //lijst.voegtoe(4); //segfault
	std::cout << lijst.max(c,d) << std:: endl;
} // main
