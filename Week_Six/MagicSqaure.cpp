#include <iostream>

using namespace std;

// Utility function to find the index of an element
int indexOf(int num, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

// Check to see if givin matrix is a magic square
bool isMagicSquare(int arr[4][4], int size)
{
    // Create array to store the value of all the columns, rows, and diagonals
    int values[size + size + 2];
    // the index used to move to iterate each value in the values array
    int index = 0;

    // loop over rows
    for (int i = 0; i < size; i++)
    {
        int value = 0;
        for (int j = 0; j < size; j++)
        {
            value = value + arr[i][j];
        }
        values[index++] = value;
    }

    // loop over columns
    for (int i = 0; i < size; i++)
    {
        int value = 0;
        for (int j = 0; j < size; j++)
        {
            value += arr[j][i];
        }
        values[index++] = value;
    }

    int value = 0;
    // loop over diagonals
    for (int i = 0; i < size; i++)
    {
        value += arr[i][i];
    }
    values[index++] = value;

    int value_1 = 0;

    // // loop over diagonals
    for (int i = size - 1; i >= 0; i--)
    {
        value_1 += arr[i][i];
    }
    values[index++] = value_1;

    // Check if all elements stored in values are the same
    for (int i = 0; i < size + size + 1; i++)
    {
        if (values[i] != values[i + 1])
        {
            return false;
        }
    }

    return true;
}

// Utility function to print out given matrix
void printMatrix(int arr[4][4], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] <= 9)
            {
                cout << "  " << arr[i][j] << " ";
            }
            else
            {
                cout << " " << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}

// Gather input from the user
// TODO: add check for 0 > n < 17
void gatherUserInput(int arr[4][4], int size)
{
    int userInput;
    int index = 0;
    const int length = size * size;
    int userData[length];
    for (int i = 0; i < length; i++)
    {
        userData[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "[" << i << "]" << "[" << j << "]: ";
            cin >> userInput;
            if (indexOf(userInput, userData, length) > -1)
            {
                cout << "That value already exists! Please try again." << endl;
                j--;
            }
            else
            {
                userData[index++] = userInput;
                arr[i][j] = userInput;
            }
        }
        cout << endl;
    }
}

void genMatrix(int arr[4][4], int size)
{
    int count = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = count++;
        }
    }
}

int main()
{
    // 4 x 4 array with 16 values from user
    const int size = 4;
    int matrix[size][size];

    cout << "Please enter in the array information!" << endl;
    gatherUserInput(matrix, size);

    // printMatrix(matrix, size);
    if (isMagicSquare(matrix, size))
    {
        cout << "Matrix is magical" << endl;
    }
    else
    {
        cout << "No magic here" << endl;
    }

    return 0;
}
