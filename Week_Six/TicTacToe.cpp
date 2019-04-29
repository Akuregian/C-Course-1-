#include <iostream>
#include <iomanip> 
#include <string.h>
#include <typeinfo>

using namespace std;
char player = 'X';

/*
Function Displays the Tic Tac Toe Board Game
@param matrix[3][3] is thr 2 dimensional array holding each place on the board
@param size is the size of each array
*/
void DrawBaord(string matrix[3][3], int size) 
{
    // Displays the board game
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << matrix[i][j] << "  ";
       }
    cout << endl << endl;
    }
}

void updateBaord(string matrix[3][3], int size, int nextMove) 
{
    int i = (nextMove - 1) / 3;
    int j = (nextMove - 1) % 3;
    matrix[i][j] = player;

    cout << endl << endl;

    // Displays the board game
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << matrix[i][j] << "  ";
       }
    cout << endl << endl;
    }
}
int userInput()
{
    int playerMove;
    cin >> playerMove;
    return playerMove;
}

bool winnerCheck(string matrix[3][3], int size) 
{
    bool winner = false;

    // Check Rows
    for(int i = 0; i < size; i++) {
        if(matrix[i][0] == matrix[i][1] && matrix[i][1] == matrix[i][2]) {
            winner = true;
            return winner;
        }
    }

    // Check Columns
    for(int j = 0; j < size; j++) {
        if(matrix[0][j] == matrix[1][j] && matrix[1][j] == matrix[2][j]) {
            winner = true;
            return winner;
        }
    }

    // Check Left Diagonals
    if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2]) {
        winner = true;
        return winner;
    }
    //Check Right Diagonals
    if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0]) {
        winner = true;
        return winner;
    }

    return winner;
}

void togglePlayer()
{
    if(player == 'X'){
        cout << "Player O Turn: ";
        player = 'O';
    }
    else {
        cout << "Player X Turn: "; 
        player = 'X';
    }
}

int main()
{
    const int size = 3;
    string matrix[size][size] = { {"1", "2", "3"}, 
                                  {"4", "5", "6"}, 
                                  {"7", "8", "9"} };
    cout << endl;
    bool winner = false;

    // Function that displays the board
    DrawBaord(matrix, size);

    while (!winner) {
        // Function takes in user input
        int nextMove = userInput();

        // Draw the updated board
        updateBaord(matrix, size, nextMove);

        // Function that checks if a player has won
        bool found = winnerCheck(matrix, size);
        
        if(found){
            cout << "We Have A WINNNNNER" << endl;
        }
        else{
            cout << "no Winner yet" << endl;
        }

        // Function that checks if all slots are filled

        // Flip players
        togglePlayer();
    }



    return 0;
}