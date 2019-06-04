#include <iostream>
#include <iomanip> 
#include <string>
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
/*
Function updateBoard updates and then displays the new board and its new array
@param matrix is the matrix being passed in
@param size is the size of the matrix
@param nextMove is the nextMove thats gathered from the userInput Function
*/
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

/*
Function will display the current player and then take in the user input
If the user input is between 1 - 9 it will return the players move, else it will continue to recieve input
*/
int userInput(string matrix[3][3])
{
    
    int playerMove;

    if(player == 'X') {
        cout << "Player X Turn: ";
    }
    else{
        cout << "Player O Turn: ";
    }

    // Check and make sure input is valid
    bool valid = false;
    while (!valid) {
        cin >> playerMove;
        int i = (playerMove - 1) / 3;
        int j = (playerMove - 1) % 3;


        if(playerMove > 0 && playerMove < 10 && matrix[i][j] != "X" && matrix[i][j] != "O") {
            valid = true;
        }
        else {
            cout << "Invalid, try Again";
        }
    }
    return playerMove;
}

/*
Function winnerCheck Checks to see if a winner has been found by checking each row, column and diagonal
@param string matrix[][] is the matrix being passed in
@param size is the size of the matrix
@return will return a boolean value to determine if a winner has ben found. true == yes, false == no
*/
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

/*
Function that checks if all moves have been made and no more are left
@param matrix[3][3] passes the matrix into the function
@param size is the size of the corresponding matrix
@return will return false if there are moves left to make and true when its a tie game
*/

int tieGameChecker(int count, int size) 
{
    if(count == size*size){
        cout << "Time Game!" << endl;
        exit(EXIT_FAILURE);
    }
    else {
        count++;
        return count;
    }
}

/*
Function togglePlayer will flip the current player, so the other player can input
*/
void togglePlayer()
{
    if(player == 'X'){
        player = 'O';
    }
    else {
        player = 'X';
    }
}

int main()
{ 
    const int size = 3; // Increase Size for Scaling
    string matrix[size][size] = { {"1", "2", "3"}, 
                                  {"4", "5", "6"}, 
                                  {"7", "8", "9"} };
    cout << endl;
    bool winner = false;
    int counter = 1;

    // Function that displays the board
    DrawBaord(matrix, size);

    while (!winner) {
        // Function takes in user input
        int nextMove = userInput(matrix);

        // Draw the updated board
        updateBaord(matrix, size, nextMove);

        // Function that checks if a player has won
        bool found = winnerCheck(matrix, size);
        
        if(found){
            cout << "Player " << player << " has won the game!" << endl;
            exit(EXIT_FAILURE);
        }

        // Function that checks if all slots are filled
        counter = tieGameChecker(counter, size);

        // Flip players
        togglePlayer();
    }



    return 0;
}