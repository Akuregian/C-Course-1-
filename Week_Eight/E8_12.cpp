#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // ask user for the filename
    cout << "Enter the Filename: ";
    string filename;
    cin >> filename;
    
    // initialize the input stream
    ifstream open_file;
    open_file.open(filename);

    // check for errors opening the file
    if(open_file.fail())
    {
        cout << "Could not find and open the file" << endl;
        return 1;
    }

    // grab each line from the file
    string line;
    while(getline(open_file, line))
    {
        if(line.length() == 0)
        {
            cout << "Empty Line" << endl;
        }
        else
        {
            break;
        }
        
    }


    return 0;
}