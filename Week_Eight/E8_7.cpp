#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    // enter file name
    cout << "Enter the File you want to reverse: ";
    string fileName;
    cin >> fileName;

    //initialize the input stream
    ifstream fileToBeReversed;
    fileToBeReversed.open(fileName);

    if(fileToBeReversed.fail()) 
    {
        cout << "File Is not Found" << endl;
        return 0;
    }

    // initialize the output stream
    ofstream reversedFile;
    reversedFile.open("Reversed.txt");


    // get the file size
    fileToBeReversed.seekg(0, ios::end);
    int fileSize = fileToBeReversed.tellg();

    //read each line
    int i = -2;
    string line;
    char byte;
    while(i >= -fileSize)
    {
        fileToBeReversed.seekg(i , ios::end);
        fileToBeReversed.get(byte);
        if(byte == '\n') 
        {
            getline(fileToBeReversed, line);

            // Add To the New Text file
            reversedFile << line << endl;
            i--;
        }
    i--;
    }

    //grab the first line
    fileToBeReversed.seekg(0);
    getline(fileToBeReversed, line);
    reversedFile << line << endl;
}