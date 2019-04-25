class Board
{
private:
  int **board;
  int _size;
  int _activePlayer;
  char _players[2];
  void allocArray()
  {
    board = new int *[_size];
    for (int i = 0; i < _size; i++)
    {
      board[i] = new int[_size];
    }
  }

public:
  Board();
  Board(int);
  void printBoard();
  void setPlayers(char piece);
  void printPlayersInfo();
  bool setPiece();
  char getPlayer(int index);
  int getActivePlayer();
  int getSize();
  ~Board();
};
