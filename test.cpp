// Example program
#include <iostream>
#include <string>

int main()
{
  std::string name, sport;
  std::cout << "Whats your name? \n";
  getline (std::cin, name);
  std::cout << "Whats your favoirtite sport? \n";
  getline (std::cin, sport);
  std::cout << "I could beat " << name << " cause Im the best " << sport << " Player out their.. \n";
  
}
