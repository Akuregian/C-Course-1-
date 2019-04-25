#include "board.h"
#include <iostream>
using namespace std;

//Default constructor
Board::Board()
{
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

int Board::getSize() { return _size; }

void Board::printBoard()
{
  for (int i = 0; i < _size; i++)
  {
    for (int j = 0; j < _size; j++)
    {
      cout << board[i][j];
    }
    cout << endl;
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