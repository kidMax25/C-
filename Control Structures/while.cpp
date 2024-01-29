// The While Loop
// Counting with The while Loop

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please Insert a number: ";
    cin >> n;

    while (n > 0)
    {
        cout << n << ",";
        --n;
    }

    cout << "Fire!\n";
    return 0;
}