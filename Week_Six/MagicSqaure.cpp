#include <iostream>

using namespace std;

int main() 
{
    srand(time(NULL));
    // 4 x 4 array with 16 values from user
    const int size = 4;
    int matrix[size][size];

    cout << endl;

    for (int i = 0; i <= size; i++){
        for (int j = 0; j <= size; j++){
            matrix[i][j] = 0;
            
            if(i == 4 || j == 4){
                cout << endl;
                break;
            }
            else{
                cout << matrix[i][j];
            }
        }
    }

    return 0;
}