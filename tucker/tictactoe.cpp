#include <iostream>
#include "board.h"

using namespace std;

int main()
{
  char piece;
  bool validPiece = false;
  int location;
  Board board;

  cout << "Welcome To Tic Tac Toe!" << endl;
  while (!validPiece)
  {
    cout << "Player 1 Choose your character! ('X' or 'O'): ";
    cin >> piece;
    if (piece == 'X' || piece == 'O')
    {
      validPiece = true;
      board.setPlayers(piece);
    }
    else
    {
      cout << "Invalid option!" << endl;
    }
  }
  board.printPlayersInfo();
  while (true)
  {
    // print seperator
    cout << "+++++++++++++" << endl;

    // get active player index
    int currentPlayer = board.getActivePlayer();
    // 
    char player = board.getPlayer(currentPlayer);
    cout << "Player " << (currentPlayer + 1) << "'s turn (" << player << "):" << endl;
    cout << "Please Choose Where to place your piece." << endl;
    board.printBoard();
    cin >> location;
    if(location < 1 || location > 9) {
      cout << "Invalid Option! Choose between (1 - 9)" << endl; 
    }else {
      // set piece
      // check if player wins
    }
  }
}
