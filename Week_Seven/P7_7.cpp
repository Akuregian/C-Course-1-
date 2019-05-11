#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int longestWord = 0;

// Student Structure consisting of first name, last name and grade.
struct Student
{
    string first;
    string last;
    char grade[5];
};

/*
Function that takes in a struct
*/
void sortByGrade(vector<Student> vec, vector<Student> newVecArray, string grade) 
{
    for(int i = 0; i < vec.size(); i++) {
        if(vec[i].grade == grade) {
            newVecArray.push_back(vec[i]);
        }
    }

    // Display the results
    for(int i = 0; i < newVecArray.size(); i++) {
        cout << "-> " << newVecArray[i].first << " ";
        cout << newVecArray[i].last ; 

        int sizeFirst = newVecArray[i].first.length();
        int sizeSecond = newVecArray[i].last.length();
        int currentSize = (sizeFirst + sizeSecond);
        if(currentSize > longestWord) {
            longestWord = currentSize;
        }
        int spacesToPrint = longestWord - currentSize;
        for(int i = 0; i < spacesToPrint + 2; i++) {
            cout << " ";
        }

        cout <<" Grade: " << newVecArray[i].grade;
        cout << endl;
    }
}

int main()
{  
    // Initialize the structure
    Student students;

    // Add a pointer to the address of students
    Student *pointer = &students;

    // Creates a vector array for struct Student
    vector <Student> vec;

    // Initialize a new vector array of struct for sorting
    vector <Student> newVecArr;
    string sentinelVal = "0";
    int i = 0;
    bool run = false;

    // Takes in user input (first name, last name, and grade)
    while(!run) {
        cout << "Enter First Name (0 to terminate): ";
        cin >> pointer->first;

        if(pointer->first == sentinelVal) {
            break;
        }
        cout << "Please Enter Last Name: ";
        cin >> pointer->last;

        cout << "Enter Students Grade: ";
        cin >> pointer->grade;

        // make sure the grade is upperCase by converting it
        char upperCaseString;
        for(int i = 0; i < 1;i++) {
            upperCaseString = toupper(pointer->grade[i]);
        }

        *pointer->grade = upperCaseString;
        
        // add too new vector of structs
        vec.push_back(students);
        i++;

    }

    // sort the vector by their grades and display
    //cout << "All Students who got A's " << endl;
    sortByGrade(vec, newVecArr, "A");

    //cout << "All Students who got B's " << endl;
    sortByGrade(vec, newVecArr, "B");

    //cout << "All Students who got C's " << endl;
    sortByGrade(vec, newVecArr, "C");

    //cout << "All Students who got D's " << endl;
    sortByGrade(vec, newVecArr, "D");

    //cout << "All Students who got F's " << endl;
    sortByGrade(vec, newVecArr, "F");

    return 0;
}