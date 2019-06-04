#include <iostream>
#include <string.h>

using namespace std;

string season;

int main ()
{
	// Get the Month and Date input from the user
	cout << "Month: (1-12) ";
	int month;
	cin >> month;

	if ((month <= 0) || (month > 12)) {
		cout << "Invalid Month (1 - 12), Please Run the Program again. " << endl;
		exit(0);
	}	

	cout << "Day: ";
	int day;
	cin >> day;

	if ((day < 0) || (day > 31)) {
		cout << "Invalid day, Please Run the Program again. " << endl;
		exit(0);
	}
	
	cout << endl;

//------------------------------------------------------------------------------------------

// Check Which Season We're in

	// If Month is 1, 2, or 3 --> Winter Season
	if ((month >= 1) && (month <=3)) {
		season = "Winter";
	}
	// If Month is 4, 5, or 6 --> Spring Season

	else if ((month >= 4) && (month <=6)) {
		season = "Spring";
	}
	// If Month is 7, 8 or 9 --> Summer

	else if ((month >= 7) && (month <=9)) {
		season = "Summer";
	}
	// If Month is 10, 11, 12 --> Fall

	else if ((month >= 10) && (month <=12)) {
		season = "Fall";
	}

//--------------------------------------------------------------------------------

//Checking if month is divisable by 3 and day >= 21

	if ((month % 3 == 0) && (day >= 21)) {

		if (season == "Winter") {
			season = "Spring";
		}

		else if (season == "Spring") {
			season = "Summer";
		}

		else if (season == "Summer") {
			season = "Fall";
		}

		else {
			season = "Winter";
	}	
}
//--------------------------------------------------------------------------------

	//Determine the Month and Give it a name	

	if (month == 1) {
		string monthName = "Januray";
		if ((day > 0) && (day <=31)) {
			cout << monthName << " " << day << endl;
		}
		else {
			cout << "Invalid Day, Please make sure the days are within the months range." << endl;
		}
	}

	else if (month == 2) { // Need too Add LEAP YEAR
		string monthName = "February";
		if ((day > 0) && (day <=28)) {
			cout << monthName << " " << day << endl;
		}
		else {
			cout << "Invalid Day, Please make sure the days are within the months range." << endl;
		}
	}

	else if (month == 3) {
		string monthName = "March";
		if ((day > 0) && (day <=31)) {
			cout << monthName << " " << day << endl;
		}
		else {
			cout << "Invalid Day, Please make sure the days are within the months range." << endl;
		}	
	}

	else if (month == 4) {
		string monthName = "April";
		if ((day > 0) && (day <=30)) {
			cout << monthName << " " << day << endl;
		}
		else {
			cout << "Invalid Day, Please make sure the days are within the months range." << endl;
		}
	}

	else if (month == 5) {
		string monthName = "May";
		if ((day > 0) && (day <=31)) {
			cout << monthName << " " << day << endl;
		}
		else {
			cout << "Invalid Day, Please make sure the days are within the months range." << endl;
		}
	}

	else if (month == 6) {
		string monthName = "June";
		if ((day > 0) && (day <=30)) {
			cout << monthName << " " << day << endl;
		}
		else {
			cout << "Invalid Day, Please make sure the days are within the months range." << endl;
		}
		
	}

	else if (month == 7) {
		string monthName = "July";
		if ((day > 0) && (day <=31)) {
			cout << monthName << " " << day << endl;
		}
		else {
			cout << "Invalid Day, Please make sure the days are within the months range." << endl;
		}
	}

	else if (month == 8) {
		string monthName = "August";
		if ((day > 0) && (day <=31)) {
			cout << monthName << " " << day << endl;
		}
		else {
			cout << "Invalid Day, Please make sure the days are within the months range." << endl;
		}
	}

	else if (month == 9) {
		string monthName = "September";
		if ((day > 0) && (day <=30)) {
			cout << monthName << " " << day << endl;
		}
		else {
			cout << "Invalid Day, Please make sure the days are within the months range." << endl;
		}
	}
	else if (month == 10) {
		string monthName = "October";
		if ((day > 0) && (day <=31)) {
			cout << monthName << " " << day << endl;
		}
		else {
			cout << "Invalid Day, Please make sure the days are within the months range." << endl;
		}
	}

	else if (month == 11) {
		string monthName = "November";
		if ((day > 0) && (day <=30)) {
			cout << monthName << " " << day << endl;
		}
		else {
			cout << "Invalid Day, Please make sure the days are within the months range." << endl;
		}
	}

	else if (month == 12) {
		string monthName = "December";
		if ((day > 0) && (day <=31)) {
			cout << monthName << " " << day << endl;
		} 
		else {
			cout << "Invalid Day, Please make sure the days are within the months range." << endl;
		}	
	}
	else {
		cout << "Invalid Month, Range Must be 1 through 12" << endl;
	}

//--------------------------------------------------------------------------------

//Print out the Season

cout << "Its " << season << " Season!" << endl;
 

};