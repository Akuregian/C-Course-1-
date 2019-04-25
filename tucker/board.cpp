#include "board.h"
#include <iostream>
#include <string>
using namespace std;

//Default constructor
Board::Board()
{
  _activePlayer = 0;
  _size = 3;
  allocArray();
  int count = 1;
  for (int i = 0; i < _size; i++)
  {
    for (int j = 0; j < _size; j++)
    {
      board[i][j] = count++;
    }
  }
}

//Main construcor
Board::Board(int size)
{
  _activePlayer = 0;
  _size = size;
  allocArray();
  int count = 1;
  for (int i = 0; i < _size; i++)
  {
    for (int j = 0; j < _size; j++)
    {
      board[i][j] = count++;
    }
  }
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