// Add all elements in an array

#include <iostream>

using namespace std;

int myArray[] = {23, 45, 67, 87, 45};

int main()
{
    int result = 0;
    for (int i = 0; i < 5; i++)
    {
        result += myArray[i];
        
    }
    cout << result;
    return 0;
}