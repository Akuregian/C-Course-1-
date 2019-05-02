#include <iostream>
#include <string.h>

using namespace std;

const double Rate1 = 0.10;
const double Rate2  = 0.15; //  + 800
const double Rate3  = 0.25; // + 4400
int taxAmount = 0;
double taxPercent = 0;

int main() 
{	
	cout << "Are you Married? y = Yes (married). n = No (single)";
	string Status;
	cin >> Status;
	cout << "Whats your income?" ;
	double income;
	cin >> income;
	
	if (Status == "y") {

		if (income <= 16000) {
			taxPercent = Rate1;
			taxAmount = income * Rate1;
		}

		if ((income > 16000) && (income <= 64000)){
			taxPercent = Rate2;
			taxAmount = (income *Rate2) + 1600;
		}
		if (income > 64000) {
			taxPercent = Rate3;
			taxAmount = (income * Rate3) + 8800;
		}

	}
	else if (Status == "n") {

		if (income <= 8000) {
			taxPercent = Rate1;
			taxAmount = income * Rate1;
		}

		if ((income > 8000) && (income <= 32000)) {
			taxPercent = Rate2;
			taxAmount = (income * Rate2) + 800;
		}
		if (income >= 32000) {
			taxPercent = Rate3;
			taxAmount = (income * Rate3) + 4400;
		
		}
	}
	else {
		cout << "Invalid Input, Try Again" << endl;

	}

cout << "The Tax Percent Bracket is: " << taxPercent << endl;
cout << "The Taxed Amount is: " << taxAmount << endl;

};