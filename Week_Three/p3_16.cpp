#include <iostream>
#include <stdlib.h>

using namespace std;

bool ATM = true;
double SavingsBalance = 0.0;
double CheckingBalance = 0.0;

int main ()
{
	while (ATM){
		// ask for the initial balance
		cout << "What is your current balance in your Checking account: ";
		double initialCheckingBalance = 0.0;
		cin >> initialCheckingBalance;

		// reject any negative values entered
		if (initialCheckingBalance < 0) {
			cout << "Balance rejected, please enter another value" << endl;
			continue;
		}

		cout << "Whats is your current balance in your Savings Account? ";
		double initialSavingsBalance = 0.0;
		cin >> initialSavingsBalance;
		// reject any negative values entered
		if (initialSavingsBalance < 0) {
			cout << "Balanced Rejected, please enter another value" << endl;
			continue;
		}

		else {

			// transaction type: deposit, withdrawl or trasfer
			cout << "What type of Transaction: Deposit(1), Withdrawl(2), Transfer(3)";
			int option;
			cin >> option;
			
			//Deposit
			if (option == 1) {

				cout << "Is this for Checkings (1) or Savings (2)? ";
				int accountOption;
				cin >> accountOption;
				cout << endl;

				cout << "Deposit Amount: ";
				double Deposit;
				cin >> Deposit;
				cout << endl;
				
				if (accountOption == 1) {
					CheckingBalance = initialCheckingBalance + Deposit;
					SavingsBalance = SavingsBalance + initialSavingsBalance;
				}

				if (accountOption == 2) {
					SavingsBalance = initialSavingsBalance + Deposit;
					CheckingBalance = CheckingBalance + initialCheckingBalance;
				}
			}
			
			//Withdrawl
			else if (option == 2) {

				cout << "Is this for Checkings (1) or Savings (2)? ";
				int accountOption;
				cin >> accountOption;
				cout << endl;
				
				cout << "Withdrawl amount: ";
				double Withdrawl;
				cin >> Withdrawl;
				cout << endl << endl;

				if (accountOption == 1) {
					CheckingBalance = initialCheckingBalance - Withdrawl;
					SavingsBalance = SavingsBalance + initialSavingsBalance;
				}

				if (accountOption == 2) {
					SavingsBalance = initialSavingsBalance - Withdrawl;
					CheckingBalance = CheckingBalance + initialCheckingBalance;
				}

			}	
			//Transfer
			else if (option == 3) {

				cout << "Transfer Amount: ";
				double Transfer;
				cin >> Transfer;
				cout << endl;
				
				cout << "Transfer from Checking too Savings(1) or from Savings too Checking(2)? ";
				int accountOption;
				cin >> accountOption;

				if (accountOption == 1) {
					CheckingBalance = initialCheckingBalance - Transfer;
					SavingsBalance = initialSavingsBalance + Transfer;
				}

				if (accountOption == 2) {
					SavingsBalance = initialSavingsBalance - Transfer;
					CheckingBalance = initialCheckingBalance + Transfer;
				}

			}
		
		//Check to make sure we didnt overdraw an account
		if (SavingsBalance < 0) {
			cout << "Looks like you've overdrawn the account, game over.. " << endl << endl;
			exit(EXIT_FAILURE);
		}

		if (CheckingBalance < 0) {		
			cout << "Looks like you've overdrawn the account, game over.. " << endl << endl;;
			exit(EXIT_FAILURE);
		}	

		// print both balances
		cout << "Savings Account Balance: " << SavingsBalance << endl;
		cout << "Checking Account Balance: " << CheckingBalance << endl << endl << endl;

		cout << "Would you like to perform another Transaction? y/n ";
		char anotherTransaction;
		cin >> anotherTransaction;
		if (anotherTransaction == 'y'){
			continue;
		}
		else {

			break;
		}	
	    }
	  }
 };
