#include <iostream>
#include <cmath>

/*
    Program computes the perimiter of a triangle using coordinates
*/

using namespace std;

double formula(int x2, int x1, int y2, int y1)
{
    // sqaureroot of (x2 - x1)^2 + (y2 - y1)^2
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

struct Point
{
    int x;
    int y;
};

struct Triangle
{
    Point a;
    Point b;
    Point c;

};

int main()
{
    // user input for all cooridinates
    Triangle tri;
    cout << endl << "This program computes the perimeter \n of a triangle using coordinates"<< endl << endl;
    cout << "Enter first coordinates: ";
    cin >> tri.a.x;
    cin >> tri.a.y;

    cout << "Enter Second Coordinates: ";
    cin >> tri.b.x;
    cin >> tri.b.y;

    cout << "Enter Third  Coodinates: ";
    cin >> tri.c.x;
    cin >> tri.c.y;

    //a to b
    double length1 = formula(tri.b.x, tri.a.x, tri.b.y, tri.a.y);
    //b to c
    double length2 = formula(tri.b.x, tri.c.x, tri.b.y, tri.c.y);
    //c to a
    double length3 = formula(tri.c.x, tri.a.x, tri.c.y, tri.a.y);

    //results
    double results = (length1 + length2 + length3);

    //display results
    cout << endl << "Total Perimeter Length is: " << results  << endl;

    return 0;
}