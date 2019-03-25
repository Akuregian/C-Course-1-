#include <iostream>

using namespace std;

int main()
{
    // user input
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;


    if (number > 1) {

        for (int i = 2; i <= number; i++) {
            if (number % i != 0) {
                cout << i << endl;
            }
            else {
                cout << "Hello";
            }
    }

    }
    else {
        cout << "Number is Prime" << endl;
    }

    return 0;
}