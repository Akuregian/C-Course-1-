#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int daysInMonth = 0;

/*
    Computes the Weekday Given the date
    @param year is the year
    @param month is the month (1= january 12= Decemeber)
    @param day is the day of month
    @return the weekday (0 = sunday, 6 = saturday)
*/
int day_of_Week(int year, int month, int day)
{
    int y = year;
    int m = month - 1;

    if (month < 3) {
        y--;
        m = m + 4;
    }
    return (y + y / 4 - y / 100 + y / 400 + 3 * m + 4 - (m - m / 8) / 2 + day) % 7;
}

/*
    Function that prints using conidtionals to find the month, and then prints year
    @param month is the month
    @return The months name.

*/

string Get_Months_Name(int month) 
{
    int m = month;
    string monthName = "";

    if (m == 1) {
        monthName = "January";
        daysInMonth = 31;
    }

    else if (m == 2) {
        monthName = "February";
        daysInMonth = 29;
    }

    else if (m == 3) {
        monthName = "March";
        daysInMonth = 31;
    }

    else if(m == 4) {
        monthName = "April";
        daysInMonth = 30; 
    }

    else if (m == 5) {
        monthName = "May";
        daysInMonth = 31;
    }

    else if (m == 6) {
        monthName = "June";
        daysInMonth = 30;
    }

    else if(m == 7) {
        monthName = "July";
        daysInMonth = 31;
    }

    else if (m == 8) {
        monthName ="August";
        daysInMonth = 31;
    }

    else if (m == 9) {
        monthName = "September";
        daysInMonth = 30;
    }

    else if(m == 10) {
        monthName ="October";
        daysInMonth = 31;
    }

    else if (m == 11) {
        monthName = "November";
        daysInMonth = 30;
    }

    else {
        monthName = "December";
        daysInMonth = 31;
    }

    return monthName;
}



// main function

int main() 
{
    // Take user input for month, year and day

    int month;
    cout << " Month: ";
    cin >> month;
    cout << endl;

    int day;
    cout << " Day: ";
    cin >> day;
    cout << endl;

    int year;
    cout << "Year: ";
    cin >> year;
    cout << endl;

    // calulcate the day of the week and get month name
    int dayWeek = day_of_Week(year, month, day);
    string monthsName = Get_Months_Name(month);

    // print the header
    cout << setw(9) << monthsName << " " << year << endl;

    // print the days of week
    for (int i = 0; i <= 6; i++) {
        if (i == 0){
            cout << "Su ";
        }
        else if (i == 1) {
            cout << "Mo ";
        }
        else if (i == 2) {
            cout << "Tu ";
        }
        else if ( i == 3) {
            cout << "We ";
        }
        else if (i == 4){
            cout << "Th ";
        }
        else if (i == 5) {
            cout << "Fr ";
        }
        else if (i == 6) {
            cout << "Sa " << endl;
        }
    }

    // Determine the Day of week and print the first day
    for (int i = dayWeek; i < daysInMonth; i++) {

        if (i % 7 == 0) {
            cout << endl;
        }
        else {
            cout << " " << i << " ";
        }
    }

    cout << endl << "Day: " <<  dayWeek << endl;
    


    return 0;
}