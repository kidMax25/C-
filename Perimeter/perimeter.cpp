// Perimter of a Rectangle

#include <iostream>
using namespace std;

int perimter(int l, int w)
{
    int myPerimeter = 2 * (l + w);

    return myPerimeter;
}

int main()
{
    int l,w;
    cout << "Input length in cm: ";
    cin >> l;

    cout << "Input Width in cm: ";
    cin >> w;

    cout << "The Perimeter is: " << perimter(l,w) << "cm";

    return 0;
}