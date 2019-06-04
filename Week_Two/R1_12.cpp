#include <iostream>

using namespace std;

int main()
{
    double balance = 10000.0;
    double newBalance = 0;
    double apr = 0.05;
    const int withdrawl = 500;
    int interest;
    int month = 0;
    int year = 0;
    int monthsLeft = 0;
    const int oneYear = 12;

    while (balance > 0){
        balance = balance - withdrawl;
        interest = balance * apr;
        newBalance = balance + interest;
        month++;

        year = month / oneYear;
        monthsLeft = month % oneYear;

        cout << "interest: " << interest << ", balance: " << balance << endl;

    }

    cout << "It Will take " << year << " year and "  << monthsLeft << " months to reach zero dollars." << endl;
}