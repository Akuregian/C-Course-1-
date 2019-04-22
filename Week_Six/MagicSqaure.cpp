#include <iostream>

using namespace std;

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

bool isMagicSquare(int arr[][4], int size)
{
    int values[size + size + 2];
    int index = 0;

    for (int i = 0; i < size + size; i++)
    {
        values[i] = 0;
    }

    // loop over rows
    for (int i = 0; i < size; i++)
    {
        int value = 0;
        for (int j = 0; j < size; j++)
        {
            value = value + arr[i][j];
            cout << "[" << i << "]"<< "[" << j << "]" << arr[i][j] << endl;
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
            cout << "[" << j << "]"<< "[" << i << "]" << endl;
        }
        values[index++] = value;
    }

    for (int i = 0; i < size + size; i++)
    {
        cout << "test  " << values[i] << endl;
    }

    // loop over diagonals
}

void printMatrix(int arr[][4], int size)
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

void gatherUserInput(int arr[][4], int size)
{
    int userInput;
    int index = 0;
    int length = size * size;
    int userData[length];
    for (int i = 0; i < length; i++)
    {
        userData[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
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

void genMatrix(int arr[][4], int size)
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
    srand(time(NULL));
    // 4 x 4 array with 16 values from user
    const int size = 4;
    // int matrix[size][size];
    int matrix[size][size] = {
        {16, 3, 2, 13}, // 34
        {5, 10, 11, 8},// 34
        {9, 6, 7, 12},// 
        {4, 15, 14, 1}};// 

    cout << "Please enter in the array information!" << endl;
    // genMatrix(matrix, size);
    // gatherUserInput(matrix, size);

    // printMatrix(matrix, size);
    isMagicSquare(matrix, size);

    return 0;
}
