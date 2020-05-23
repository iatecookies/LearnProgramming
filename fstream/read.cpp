#include <iostream>
#include <fstream>
#include <vector>



int main (){

    std::ifstream file ("sample.txt");
    
    //char temp = file.get();
   // std::cout << temp << std::endl; // very first variable
    
    // or get first line
    std::string line;
    getline(file,line);
    std::cout << line << std::endl;
    
    std::vector<char> names;
    
    if(file.is_open()){
        std::cout<<"itworked"<<std::endl;
    }
    
    
    char input;
    while(file >> input ){
        names.push_back(input);
    
    }
    
    for (char name : names){
        std::cout << name << std::endl;
    
    }
    return 0;
}
