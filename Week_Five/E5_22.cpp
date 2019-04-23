#include <iostream>
#include <string>

using namespace std;

string first_str = "";
string second_str = "";


bool is_palindrome(string str) 
{  
    if (str.length() < 2){
        return true;
    }
    else{

        if(str[0] != str[str.length() - 1]) {
            return false;
        }
        else
        {
            string newString = str.substr(1, str.length() - 2);
            return is_palindrome(newString);
        }
    }
} 

int main()
{
    cout << "Enter a word: ";
    string input = "";
    cin >> input;

    int results = is_palindrome(input);

    if (results) {
        cout << "The word entered is a Palindrome" << endl;
    }
    else {
        cout << "The word entered is not a Palindrome" << endl;
    }

    return 0;
}