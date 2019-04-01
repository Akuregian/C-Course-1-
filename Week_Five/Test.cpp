#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

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

int main ()
{
    int months;
    cout << " Month: ";
    cin >> months;
    cout << endl;

    int days;
    cout << " Day: ";
    cin >> days;
    cout << endl;

    int years;
    cout << "Year: ";
    cin >> years;
    cout << endl;


    int dayWeek = day_of_Week(years, months, days);
    cout << dayWeek << endl;
}