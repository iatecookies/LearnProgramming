# LearnProgramming
All the basic concepts you need to know :smile: .

> Leren doe je door niet te kijken maar door te doen

TO DO: 
- [x] thsis is a complete item
- [ ] make a list of each file what conceptre covered

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
1. Compileer object files met de optie -fPIC (position independent code)
    g++ -fPIC -c obj1.cc
    g++ -fPIC -c obj2.cc
2. Link alle object files in een shared object. Gebruik de optie -shared
    g++ -shared -fPIC -o libcool.so obj1.o obj2.o
3. Vervolgens kun je tegen deze library linken
    g++ -L/path/to/lib -I/path/to/include -o test test.cc -lcool
    
command -l: libcool.so is -lcool


Om de testprogramma te bouwen en te linken verzoeken wij je om de eerst de library te linken. Als je dat nog niet heeft gedaan, kan je volgende stappen de volgen:


1. Compileer je test bestanden met de optie -fPIC
    g++ -fPIC -c obj1.cc
2. Link alle object files in een shared object. Gebruik de optie -shared
    g++ -shared -fPIC -o libtest.so ojb1.o
3. Nu kan je executable bestand genereren voor het testprogramma
    g++ -c testprogramma.cpp
    g++ -o test testprogramma -ltest
4. Installeer de library
    sudo mv libtest.so /usr/lib/
    sudo ldconfig
5. Nu kan je het testprogramma gebruiken met de library
    ./test
```
