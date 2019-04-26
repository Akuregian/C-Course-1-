#include <iostream>
#include <typeinfo>
#include <unistd.h>
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
      cout << "Invalid option! Please choose X or O" << endl;
    }
  }
  board.printPlayersInfo();
  while (!board.getGameStatus())
  {
    // get active player index
    int currentPlayer = board.getActivePlayer();
    // get current player piece
    char player = board.getPlayer(currentPlayer);

    cout << "Player " << (currentPlayer + 1) << "'s turn (" << player << ")" << endl;
    board.printBoard();
    cout << "Please Choose Where to place your piece. (1 - 9): ";

    // Get users choice
    cin >> location;

    // make sure that the location is within range
    cout << "\n\n\n\n\n\n\n";
    if (!board.setPiece(location))
    {
      cout << "Invalid Option!" << endl;
      cout << "Choose between (1 - 9)" << endl;
      cout << "Or a slot that has not been chosen!" << endl;
      cout << "\n\n\n";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      sleep(1);
    }
    else
    {
      // check if player wins
      board.checkWin();
    }
  }
}
