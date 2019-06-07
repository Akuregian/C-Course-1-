#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void remove_breaks(ifstream& file, ofstream& file_out) {
    bool stop = false;
    int count = 0;
    int last_count = 0;
    string line;

    while(getline(file, line)) {
        if (line.length() > 0 && stop == false) {
            stop = true;
        }

        if (stop == true) {
            count++;
            file_out << line << endl;

            if (line.length() > 0) {
                last_count = count;
            }
        }
    }

    // Close Both Files
    file.close();
    file_out.close();

    // Reopen but with reversed roles
    ifstream new_file;
    new_file.open("Temp_File.txt");
    ofstream new_file_out;
    new_file_out.open("testing.txt");
    
    
    for(int i = 0; i <= last_count - 1; ++i) {
        getline(new_file, line);
        if (i == last_count - 1) {
            new_file_out << line;
        }
        else {
            new_file_out << line << endl;
        }
    }

    remove("Test_File.txt");
}

int main()
{
    // ask user for the filename
    cout << "Enter the Filename: ";
    string filename = "testing.txt";
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

    // temporary output file
    ofstream temp_file;
    temp_file.open("Temp_File.txt");

    if(temp_file.fail())
    {
        cout << "Error reading file" << endl;
        return 1;
    }

    remove_breaks(open_file, temp_file);
    
    return 0;
}