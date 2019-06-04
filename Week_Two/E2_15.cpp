#include <iostream>
#include <string.h>

using namespace std;

int main () 
{
    cout << "Please Enter a few numbers? ";
    int numbers;
    cin >> numbers;

    cout << numbers % 10 << endl;
    cout << numbers % 100 << endl;
    cout << numbers % 1000 << endl;

}