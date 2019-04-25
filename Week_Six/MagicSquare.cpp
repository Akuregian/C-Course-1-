#include <iostream>

using namespace std;

/*
function checks to see if the number is found within the array and at what index its found.
If the number is found in the array, it will return that index position of the array, else returns -1.
@param num is the number to be checked
@param arr[] is the array that will be checked for that number
@param size is the size of the array
@return i, returns the index where the number was found
*/
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

/*
Function takes in 2 paramters and proceeds to gather input from the user
for a total of 16 integers, then checks if the range is between 1 - 16 and the same digit
doesnt repeat twice.
@param array takes in a 4 x 4 arrays of integer values
@param size is the size of each array
*/
void userInput(int matrix[4][4], int size)
{
    int input;
    const int arraySize = 16;
    int userData[arraySize];
    int index = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cin >> input;
            if(input > 0 && input <= 16){
                if(indexOf(input, userData, arraySize) > -1) {
                    cout << "Already Exists, try again!" << endl;
                    j--;
                }
                else {
                    userData[index++] = input;
                    matrix[i][j] = input;
                }
            }
            else {
                cout << "Invalid, must be between 1 and 16" << endl;
                j--;
            }    
        }
    }
}

/*
Function prints the values gathered from 'gatherInput' function and prints it
into a 4 x 4 matrix
@param matrix[4][4] is the matrix to be printed
*/
void printMagicSqaure(int matrix[4][4]) 
{

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++){
            if(matrix[i][j] < 10) {
                cout << matrix[i][j] << "  ";
            }
            else {
                cout << matrix[i][j] << " ";
            }
        }
    cout << endl;
    }
}

bool isMagical(int matrix[4][4], int size)
{
    int sum = 0;
    int sumValues[10]; 
    int index = 0;
    // Check Rows
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            sum += matrix[i][j];
        }
            sumValues[index++] = sum;

    sum = 0;
    }

    // Check Columns
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            sum += matrix[j][i];
        }

    sumValues[index++] = sum;
    sum = 0;
    }

    //Check Diagonals

    //left Diagonal
    for(int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    sumValues[index++] = sum;
    sum = 0;

    //right Diagonal
    for(int i = 0; i < size; i++) {
        sum += matrix[i][3 - i];
    }
    sumValues[index++] = sum;
    sum = 0;

    // Check to see if all values == 34
    for(int i = 0; i <= 10; i++){
        cout << sumValues[i] << " ";
        if(sumValues[i] != sumValues[i + 1]){
            if(i == 9) {
                if(sumValues[i] != sumValues[i - 1]){
                    return false;
                }
                else {
                    return true;
                }
            }
            return false;
        }
    }
    return true;
}

int main()
{
    const int size = 4;
    bool inRange;
    int matrix[size][size];

    // input 16 digits from the user and test if 1 - 16 occured
    userInput(matrix, size);

    // print the matrix
    printMagicSqaure(matrix);
    
    //check the to see if the matrix is a magic sqaure
    if(isMagical(matrix, size)) {
        cout << endl << "Magic Square!!!" << endl;
    }
    else {
        cout << "Sorry, not a magic square" << endl;
    }

    return 0;
}
