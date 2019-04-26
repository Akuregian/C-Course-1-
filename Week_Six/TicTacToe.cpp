#include <iostream>

using namespace std;

/*
Function Displays the Tic Tac Toe Board Game
@param matrix[3][3] is thr 2 dimensional array holding each place on the board
@param size is the size of each array
*/
void boardGame(int matrix[3][3], int size) 
{
    int counter = 1;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            matrix[i][j] = counter++;
            cout << matrix[i][j] << "  ";
        }
    cout << endl << endl;
    }

    

}

void userInput(int matrix[3][3], int size)
{

}

int main()
{
    const int size = 3;
    int matrix[size][size];
    // Function that displays the board
    boardGame(matrix, size);

    // Function that takes in user input

    // Function that checks if a player has won

    // Function that checks if all slots are filled

    //  


    return 0;
}