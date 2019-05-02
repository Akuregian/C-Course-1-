#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Enter Your 10-digit phone number: ";
    string phoneNumber;
    cin >> phoneNumber;

    if (phoneNumber.length() == 10)
    {
        cout << "(" + phoneNumber.substr(0, 3) + ") ";
        cout << phoneNumber.substr(3, 3) + " - ";
        cout << phoneNumber.substr(6) << endl;
    }

    else
    {
        cout << "Error has occured." << endl;
    }
    	
}

