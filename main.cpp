#include <iostream>
#include <string>

using namespace std;

int main() 
{
    std::string name, age;

    std::cout << "Hey Their Little Feller, Whats your name?" << endl;
    getline (cin, name);
    std::cout << "My Dogs name was " << name << "... uhh well.. hmm." << endl;
    std::cout << "Sorry about that, Im getting old.. How old are you?" << endl;
    getline (cin, age);
    std::cout << "Wow.. Your fucking old.. Holy shit. I never new someone could reach " << age << ".";
    return 0;
}