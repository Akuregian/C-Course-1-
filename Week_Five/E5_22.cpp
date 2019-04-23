#include <iostream>
#include <string>

using namespace std;

string first_str = "";
string second_str = "";


bool is_palindrome(string str, int start, int end) 
{  
    if (str.length() < 2){
        return true;
    }
    if(str[0] != str[str.length() - 1]) {
        cout << "No match";
        return false;

    return is_palindrome(str, start++, end--);
} 

int main()
{
    cout << "Enter a word: ";
    string input = "";
    cin >> input;

    int results = is_palindrome(input, 0, input.length() - 1);

}
