#include "board.h"
#include <iostream>
#include <string>
using namespace std;

//Main construcor
Board::Board(int size)
{
  _isGameOver = false;
  _activePlayer = 0;
  _size = size;
  allocArray();
  int count = 1;
  for (int i = 0; i < _size; i++)
  {
    for (int j = 0; j < _size; j++)
    {
      board[i][j] = '0' + count++;
    }
  }
}

bool Board::getGameStatus()
{
  return _isGameOver;
}

bool Board::setPiece(int location)
{
  int i = (location - 1) / 3;
  int j = (location - 1) % 3;
  // get active player index
  int currentPlayer = this->getActivePlayer();
  char player = this->getPlayer(currentPlayer);

  if (location > 9 || location < 1 || board[i][j] == 'X' || board[i][j] == 'O')
  {
    return false;
  }

  board[i][j] = player;
  if (_activePlayer == 0)
  {
    _activePlayer = 1;
  }
  else
  {
    _activePlayer = 0;
  }

  return true;
}

char Board::getPlayer(int index)
{
  return _players[index];
}

int Board::getActivePlayer()
{
  return _activePlayer;
}

int Board::getSize() { return _size; }

void Board::setPlayers(char piece)
{
  _players[0] = piece;
  if (piece == 'X')
  {
    _players[1] = 'O';
  }
  else
  {
    _players[1] = 'X';
  }
}

void Board::printPlayersInfo()
{
  cout << "Player 1 is " << _players[0] << endl;
  cout << "Player 2 is " << _players[1] << endl;
}

void Board::checkWin()
{
  
}

void Board::printBoard()
{
  string spacer = "---";
  for (int i = 0; i < _size; i++)
  {
    spacer += "---";
  }
  spacer += "-";

  cout << spacer << endl;
  for (int i = 0; i < _size; i++)
  {
    cout << "|";
    for (int j = 0; j < _size; j++)
    {
      cout << " " << board[i][j] << " |";
    }
    cout << endl;
    cout << spacer << endl;
  }
}

//destructor
Board::~Board()
{
  for (int i = 0; i < _size; i++)
  {
    delete[] board[i];
  }
  delete[] board;
}