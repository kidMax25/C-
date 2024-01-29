// if-else loop

# include <iostream>

using namespace std;

int main()
{
    double x,y;
    cout << "Please input number X: ";
    cin >> x;
    cout << "Now input number Y: ";
    cin >> y;

    if (x>y)
    {
        cout << "X is the Greater Number";
    } else if (y>x)
    {
        cout << "Y is the Greater Number";
    }
    
return 0;    
}