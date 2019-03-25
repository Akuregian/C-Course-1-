#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int years = 0;
int month = 0;
double Total_Investment = 0;
double Interst_Gained = 0;


int main ()
{
    // User input for Initial Investment Balance 
    cout << "Whats your initial Investment: ";
    double initialInvestment = 0;
    cin >> initialInvestment;
    cout << endl;

    // User Input for Interest Rate per year (APR)
    cout << "Whats your Annual Interest Rate: ";
    double interest = 0;
    cin >> interest;
    cout << endl;

    if (initialInvestment == 0 || interest == 0) {
        cout << "Erorr, input must be above 0" << endl;
        exit(0);
    }

    // Turn rate into a monthly rate
    double monthlyRate = interest / 12.0;
    monthlyRate = monthlyRate / 100;


    Total_Investment = initialInvestment;

    // While Loop too determine, How many years to reach 1 mill
    while (Total_Investment < 1000000) {


        // Calculate the interest per month
        Interst_Gained = Total_Investment * monthlyRate;
        cout << "Interest Gained: " << Interst_Gained << endl;

        //Add the interst too the initalInvestment
        Total_Investment = Total_Investment + Interst_Gained;
        cout << "Total Investment: " << Total_Investment << endl;

        //Add Another Month
        month++;
        cout << "Month is: " << month << endl;

        //If 12 months, then year++
        if(month == 12) {
            years++;
            cout << "year: " << years << endl;
            month = 0;
        }
        else {
            continue;
        }
    }

    cout <<  endl << "It took you " << years << " years to reach 1 Million Dollars!" << endl;

};