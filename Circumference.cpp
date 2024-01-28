// Calculate Circumfernce of a Circle

#include <iostream>
using namespace std;

#define PI 3.142

double Circumference(double radius)
{

    double myCircumference;

    myCircumference = 2 * PI * radius;

    return myCircumference;
}

int main()
{
    double radius;
    cout << "Input the Radius of Circle in cm: ";
    cin >> radius;

    cout << "Circumference of Circle: " << Circumference(radius) << "cm" << endl;
    return 0;

}