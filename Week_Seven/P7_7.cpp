#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Student Structure consisting of first name, last name and grade.
struct Student
{
    string first;
    string last;
    char grade[5];
};

int main()
{  
    Student students;

    Student *pointer = &students;

    // Creates a vector array for struct Student
    vector <Student> vec;
    int sentinelVal = 0;
    int i = 0;
    bool run = false;

    while(!run) {
        cout << "Enter First Name: ";
        cin >> pointer->first;
        if(pointer->first == "0") {
            break;
        }
        vec.push_back(students);

        cout << "Please Enter Last Name: ";
        cin >> pointer->last;
        vec.push_back(students);

        cout << "Enter Students Grade: ";
        cin >> pointer->grade;
        vec.push_back(students);
        i++;

    }

    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i].first << endl;
        cout << vec[i].last << endl;
        cout << vec[i].grade << endl;
        cout << endl;
    }

    cout << "End" << endl;
    return 0;
}