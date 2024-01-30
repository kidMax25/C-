// The selective switch

#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Input your Number---> ";
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "Your number is---> " << x << endl;
        break;

    case 2:
        cout << "Your number is---> " << x << endl;
        break;

    default:
        cout << "Your Number Input was not evaluated, OPPS!";
        break;
    }
    return 0;
}