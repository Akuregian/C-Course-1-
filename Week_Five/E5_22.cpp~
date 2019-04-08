#include <iostream>
#include <string>

using namespace std;

string first_str = "";
string second_str = "";

bool is_palindrome(string str) 
{
    bool reversed = false;
    
    for (int i = 0; i < str.length(); i++) {
        first_str = str.substr(i, 1);
    }

    for (int i = str.length(); i >= 0; i--) {
        second_str = str.substr(i, 1);
    }

    if ( first_str == second_str) {
        return reversed = true;
    }
    else
    {
        return reversed = false;

    }
} 


int main()
{
    cout << "Enter a word: ";
    string input = "";
    cin >> input;

    int results = is_palindrome(input);

    if (results == 0) {
        cout << "False";
    }
    else if (results == 1) {
        cout << "True";

    }
}
