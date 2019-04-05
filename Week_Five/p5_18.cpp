#include <iostream>
#include <string>

using namespace std;

string ScannerCode(int digit)

{

	string code = "";
	
	switch (digit) 
	{
		case 0: code = "||:::";
		case 1: code = ":::||";
		case 2: code = "::|:|";
		case 3: code = "::||:";
		case 4: code = ":|::|";
		case 5: code = ":|:|:";
		case 6: code = ":||::";
		case 7: code = "|:::|";
		case 8: code = "|::|:";
		case 9: code = "|:|::";
	}

	return code;
}
int main() 
{
	// User input for a Zipcode
	cout << "Zipcode: ";
	int zip;
	cin >> zip;
	if (cin.fail() || (zip / 100000 ) > 0) {
		cout << "Too many Digits Entered or not an integer" << endl;
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

