#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
    float num1, num2, num3;

    cout << "Enter 3 numbers and I can guess the largest number you input" << endl;
    cout << "The First number is " << endl;
    cin >> num1;
    cout << "The second number is " << endl;
    cin >> num2;
    cout << "The third number is ";
    cin >> num3;

    if ((num1 >= num2) && (num1 >= num3))
        cout << "The Largest number is " << num1 << endl;
    if ((num2 >= num1) && (num2 >= num3))
        cout << "The Largest number is " << num2 << endl;
    if ((num3 >= num2) && (num3 >= num1))
        cout << "The Largest Number is " << num3;

    return 0;
 
}