#include <iostream>
#include <string>

using namespace std;

string ScannerCode(int digit)
{

string code = "";
 

	if (digit == 0) {
		code = "||:::";
	}

	if (digit == 1) {
		code = ":::||";
	}

	if (digit == 2) {
		code = "::|:|";
	}

	if (digit == 3) {
		code = "::||:";
	}

	if (digit == 4) {
		code = ":|::|";
	}

	if (digit == 5) {
		code = ":|:|:";
	}

	if (digit == 6) {
		code = ":||::";
	}
	
	if (digit == 7) {
		code = "|:::|";
	}

	if (digit == 8) {
		code = "|::|:";
	}

	if (digit == 9) {
		code = "|:|::";
	}

	return code;
}
int main() 
{
	// User input for a Zipcode
	cout << "Zipcode: ";
	int zip;
	cin >> zip;
	if ((zip / 100000 ) > 0) {
		cout << "Too many Digits Entered, Retry" << endl;
		return 0;
	}
	
	// Seperate Each Digit
	int digit_One = zip / 10000 % 10;
	int digit_Two = zip / 1000 % 10;
	int digit_Three = zip / 100 % 10;	
	int digit_Four = zip / 10 % 10;
	int digit_Five = zip % 10;

	// add all barcodes
	string bar_code1 = ScannerCode(digit_One); 
	string bar_code2 = ScannerCode(digit_Two);
	string bar_code3 = ScannerCode(digit_Three);
	string bar_code4 = ScannerCode(digit_Four);
	string bar_code5 = ScannerCode(digit_Five);
	string checkDigit = ":::|||";
	

	cout << "|" << bar_code1 << bar_code2 << bar_code3 << bar_code4 << bar_code5 << checkDigit << endl;
		
}	

