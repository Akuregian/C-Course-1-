class Board
{
private:
  int **board;
  int _size;
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
  bool setPiece();
  int getSize();
  ~Board();
};

// class Matrix
// {
// public:
//   Matrix();                  //Default constructor
//   Matrix(int m, int n);      //Main constructor
//   void setVal(int m, int n); //Method to set the val of [i,j]th-entry
//   void printMatrix();        //Method to display the matrix
//   ~Matrix();                 //Destructor

// private:
//   int m, n;
//   int **p;

//   //allocate the array
//   void allocArray()
//   {
//     p = new int *[m];
//     for (int i = 0; i < m; i++)
//     {
//       p[i] = new int[n];
//     }
//   }
// };