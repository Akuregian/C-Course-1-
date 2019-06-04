#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    for (int i = 0; i < 10; i++) {
        int r = rand() % 6;
        cout << r << endl;
    }

}