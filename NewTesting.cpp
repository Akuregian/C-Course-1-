#include <iostream>
#include <string>

using namespace std;

int main() 
{
    std::string name, sport;
    std::cout << "Hello Their partner, What should I call you?";
    getline (cin, name);
    std::cout << "Well Hello Their " << name << " Pleasure to be at your presents" << endl;
    std::cout << "what sport yall play back in highscool, " << name << " ?";
    getline (cin, sport);
    std::cout << "Nice, I used to play " << sport << " too, nearly 20 years ago..";

}