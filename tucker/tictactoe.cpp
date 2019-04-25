#include <iostream>
#include "board.h"

using namespace std;

int main()
{
  Board board;

  board.printBoard();
  cout << board.getSize() << endl;
}
