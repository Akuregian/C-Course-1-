#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

/*
IMPORTANT:
programsName.cpp wordTooSearchFor -file1.txt -file2.txt -file3.txt

Program will search for a specified word in each file thats entered in as an arguments in the command line
and then returns the number of times that word is found in each file specified
*/

using namespace std;

int main(int argc, char* argv[]) 
{
    // make sure there is a search word
    string arg = argv[1];
    if(arg[0] == '-') 
    {
        cout << "no seach word was inputed" << endl;
        return 1;
    }
    // Make sure there are atleast 3 arguments.
    if(argc <= 2) 
    {
        cout << "Not Enough Arguments, must contain a search word and a file to search." << endl;
        return 1;
    }

    //command line arugument
    int i = 2;
    while(i < argc) {   

        //argument that was entered in the command line
        string arg = argv[i];

        // word to search for
        string wordSearch = argv[1]; // 1 b/c its the second argument, 0 being the files name


        // checks the first aguments and see if it has a -
        if(arg[0] == '-') {

            // take whatever comes after the '-'
            string file1 = arg.substr(1); 

            // use it too open up a file
            ifstream file_open; 
            file_open.open(file1); //open up the file

            // Check if the file exists within the directory
            if(file_open.fail()) {
                cout << "No File was found" << endl;
                return 1;
            }

            //print out the files name
            cout << endl << file1 << ": ";

            // Will read each line and check each word for a match 
            string line;
            string word;
            while(getline(file_open, line)) {

                // Search the line retrieved for the word
                istringstream lineWords(line);
                while(lineWords >> word) {
                    if(word.find(wordSearch) != string::npos) { 
                        cout << line << endl;
                    }
                }  
            }

            cout << endl << endl;
            i++;
        }
        else if(arg[0] != '-') {
            cout << "No File was inputed or your forget the dash '-' before the file name (-Filename.txt)" << endl;
            return 1;
        }
    }

    return 0;
}