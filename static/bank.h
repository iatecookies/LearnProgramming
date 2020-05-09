#ifndef BANK_H
#define BANK_H

#include<iostream>
#include<string>

using namespace std;

class Bank {
	public:
		//default constructor
		Bank();
		
		//overload constructor
		Bank(string, int, double);
		
		//destructor
		~Bank();
	
		//Accessor functions
		string getName() const;
			// getName - return name of user
			// @return string - name of user
		
		int getAccountNumber() const;
			// getAccountNumber - returns account number of user
			// @return int - account number of user
		
		double getBalance() const;
			// getBalance - return balance of user
			// @return double - balance of user
		
		//Mutator functions
		void setName(string);
			// setName - sets name of user
			// @param string - name of user
			
		void setAccountNumber(int);
			// setAccountNumber - sets account number for user
			// @param int - account number of user
			
		void setBalance(double);
			// setBalance - sets balance of user
			// @param double - balance of user
			
		void withdraw(double);
			// withdraw
		
		void deposit(double);
		
		static void printBankInfo();
			//printBankInfo - prints bank information. two static var
	
	private:
		//member variables
		string name;
		int accountNumber;
		double balance;
		
		// set defaults value in cpp file
		static int totalAccounts;
		static double bankBalance;
};




#endif

