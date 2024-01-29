// Break Loop before they mature
#include <iostream>

using namespace std;

int main()
{
    for (int i = 10; i <= 10; i--)
    {
        cout << i << ", ";
        if (i == 3)
        {
            cout << "ABORT";
            break;
        }
    }
    return 0;
}
