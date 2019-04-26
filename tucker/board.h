class Board
{
private:
  char _players[2];
  bool _isGameOver;
  char **board;
  int _size;
  int _activePlayer;
  void allocArray()
  {
    board = new char *[_size];
    for (int i = 0; i < _size; i++)
    {
      board[i] = new char[_size];
    }
  }

public:
  Board() : Board(3){};
  Board(int);
  void printBoard();
  void setPlayers(char piece);
  void printPlayersInfo();
  void checkWin();
  bool setPiece(int);
  bool getGameStatus();
  char getPlayer(int index);
  int getActivePlayer();
  int getSize();
  ~Board();
};
