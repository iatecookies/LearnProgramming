#include <iostream>
#include <ctime>
#include "bank.h"

/*
Random numbers and static (member) variables
why static member variables? holds memory in place
*/
using namespace std;

//!!!globals are not recommended to make
static int x = 0;


void printNum();

void printBankInfo();

int main() {
	
	/*Random seed
	//generate random seed
	srand(time(0));
	
	
	//boundaries [0,4]
	cout << rand() % 5 + 1 << endl;

	//boundaries [1,100]
	unsigned int output = rand() % 100 + 1;
	
	for (int i=0; i < 10; i++){
		cout << output << endl;
		output = rand() % 100 + 1;
	}
	
	*/
	printNum();
	//destructor int x in functie is weggeblazen
	printNum();
	
	// wat als je waarde van variable wilt behouden?
	// ----------------static member variables ---------
	
	//Adan overload constructor and sarah default constructor
	
	Bank::printBankInfo();
	
	cout << "Adam created an account and deposited 500";
	Bank Adam("Adam", 0001, 500);
	Bank Sarah;
	
	cout << endl << "Sarah created an account and deposited 1000";
	Sarah.setName("Sarah");
	Sarah.setAccountNumber(0002);
	Sarah.setBalance(1000);
	
	Bank::printBankInfo();
	
	cout << endl << "Dick created an account and deposited 1500";
	Bank Dick("Dick",0003,1500);
	
	Bank::printBankInfo();
	
	cout<< endl << "Dick set his balance to 1200";
	Dick.setBalance(1200);
	
	Bank::printBankInfo();
	
	cout << endl << "Sarah deposited 700";
	Sarah.deposit(700);
	
	Bank::printBankInfo();
	
	cout << "Adam's account was terminated due to lack of use.";
	Adam.~Bank();
	
	Bank::printBankInfo();
	
	
	return 0;
}

void printNum(){

	//static is on
	//int x = 0;
	
	cout << (x += 5) << endl;
}
