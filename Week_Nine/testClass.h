#ifndef myClass_h
#define myClass_h
#include <iostream>
#include <string>

using namespace std;

class Car
{
    public:
        Car();
        Car(string type, string color);
        string type;
        string color;
        int Miles = 0;
        int addMiles(int Miles);

};

Car::Car()
{
    type = "";
    color = "";
}

Car::Car(string ntype, string ncolor)
{
    type = ntype;
    color = ncolor;
}

int Car::addMiles(int newMiles)
{
    Miles += newMiles;
    return Miles;
}

#endif