// do-while loop
#include <iostream>
#include <sstream>

using namespace std;

# define K 0.5

// Get Area of Traingle if provided with base and height

int main()
{
    unsigned base, height, Area;
    cout << "Input Base of your Triangle";
    cin >> base;
    cout << "Now Input the Height";
    cin >> height;

    do
    {
        Area = K * base * height;
        cout << "The area is: "<< Area << "cm/^2";
    } while (base>height);
    
    return 0;
}