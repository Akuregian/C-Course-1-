#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () 
{
    ofstream myFile;
    myFile.open("myTextFile.txt");



    if(myFile.fail()) {
        return 0;
    }

    myFile << "Adding new TEXTTTTTTTTTTTTTTTTT";

    string line;

    return 0;
}
