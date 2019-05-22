#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{  
    cout << "Enter the File Name: ";
    string fileName;
    cin >> fileName;

    ifstream open_file;
    open_file.open(fileName);

    if(open_file.fail())
    {
        cout << "No file with that name is found" << endl;
        return 1;
    }

    string line;
    int i = 1;
    while(getline(open_file, line))
    {
        if(line == "")
        {
            cout << "Found an empty line" << endl;
        }
    }

    return 0;
}