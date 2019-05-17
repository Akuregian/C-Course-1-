#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

/*
Program will search for a specified word in each file thats entered in as an arguments in the command line
(./a.out wordTooSearchFor -file1.txt -file2.txt)
and then returns the number of times that word is found in each file specified
*/

using namespace std;

int main(int argc, char* argv[]) 
{

    //command line arugument
    int i = 2;
    while(i < argc) {

        //argument that was entered in the command line
        string arg = argv[i];

        // word to search for
        string wordSearch = argv[1]; 

        string wordSearch1 = wordSearch + '.';

        // checks the first aguments and see if it has a -
        if(arg[0] == '-') {

            // take whatever comes after the '-'
            string file1 = arg.substr(1); 

            // use it too open up a file
            ifstream file_open; 
            file_open.open(file1); //open up the file

            //print out the files name
            cout << endl << file1 << ": ";

            // Will read each line and check each word for a match 
            string line;
            string word;
            while(getline(file_open, line)) {

                // Search the line retrieved for the word
                istringstream lineWords(line);
                while(lineWords >> word) {
                    if(word == wordSearch || word == wordSearch1) {
                        cout << line << endl;
                        break;
                    }
                }
            }

            cout << endl << endl;
            i++;
        }
    }

    return 0;
}