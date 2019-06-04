#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (int argc, char* argv[]) 
{
    int i = 1;
    while(i < argc) {
        string arg = argv[i];
        if(arg[0] == '-') {
            if(arg.substr(1) == "b") {
                cout << "You done better clicked on b" << endl;
                i++;
            }
        else if(arg.substr(1) == "a") {
            cout << "Anthony Kuregian" << endl;
            i++;
        }
        else if(arg.substr(1) == "c") {
            cout << "Im Watching Naked and Afraid right now" << endl;
            i++;
        }
        else {
            cout << "How the fuck is that not a coal!!!!" << endl;
            i++;
        }
        }
    }
}