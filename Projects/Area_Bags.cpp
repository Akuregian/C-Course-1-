#include <iostream>
#include <math.h>

using namespace std;

double SqaureFeet(double Length_One, double Length_Two, int Depth) {
    double Feet2Inches = Depth / 12.0;
    cout << "Feet: " << Feet2Inches << endl;
    int Area = Length_One * Length_Two;
    cout << "Area: " << Area << endl;
    double Calculation = Feet2Inches * Area;
    cout << "Calculations: " << Calculation << endl;
    return Calculation;
}

int main () 
{
    cout << "Whats the Length of the yard: ";
    double length_One;
    cin >> length_One;
    cout << endl;

    cout << "What is the Width of the yard: ";
    double Width;
    cin >> Width;
    cout << endl;

    cout << "Whats Depth do you want: (1 inch, 2 inch, 3 inch)";
    int Depth_Inch;
    cin >> Depth_Inch;

    double Total = SqaureFeet(length_One, Width, Depth_Inch);

    int TotalsBags =  Total / 0.5;
    cout << "Total Bags: " << TotalsBags << endl;
    return 0;
}