#include <iostream>

using namespace std;

int main() {

    int number;
    cout << "Enter number: " << endl;
    cin >> number;

    //for loop to go through the number
    for(int i = 2; i < number; i++) {
         
        // bool value too check if the number is prime
        bool isPrime = true;

        for(int j = 2; j < i; j++) {

            // if the remainder is 0 and the numbers are not the same, prime is set to false
            if(i % j == 0 && i != j) {
                isPrime = false;
                break;
            }
        }
        // if prime is true, we print i
        if(isPrime == true) {
            cout << i << endl;
        }
    }

    return 0;
}