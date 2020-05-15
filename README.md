# LearnProgramming
All the basic concepts you need to know :smile: .

> Leren doe je door niet te kijken maar door te doen

TO DO: 
- [x] thsis is a complete item
- [ ] make a list of each file what concepts are covered

## How to put comments
```
Altijd commentaar bovenaan iedere file:
/**
* klassenaam: beschrijving van klasse/programma
* @author naam (studentnummer)
* @author naam (studentnummer)
* @file filenaam
* @date datum laatste wijziging
**/
```

```
class dinges {
    public:
        // commentaar hier!
        void doeIets();
}; // dinges
// Niet hier!
void dinges::doeIets() { }
```

```
/**
* @function functienaam
* @abstract beschrijving wat de functie doet
* @param parameternaam beschrijving rol parameter
* @return beschrijving van het resultaat
* @pre exacte beschrijving preconditie
* @post exacte beschrijving postconditie
wat is er veranderd na het uitvoeren van de functie?
**/
```

```
// member functie uitleg
void Person::get_age() const {
    this -> age = age;
} // Person::get_age

```

## Linking libraries
```
1. Compile the object files with -fPIC (position independent code)
g++ -fPIC -c obj1.cc
2. Link all object files in a shared object with -shared
g++ -shared -fPIC -o libcool.so obj1.o obj2.o
3. Next u can link the library
g++ -L/path/to/lib -I/path/to/include -o test test.cc -lcool

command -l: libcool is -lcool
```
