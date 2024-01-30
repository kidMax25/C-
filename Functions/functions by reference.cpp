// we use &
#include <iostream>

using namespace std;

int previous(int x, int &prev, int &next)
{
    prev = x - 1;
    next = x + 1;
    return 0;
}

int main(){
    int a,b,c;
    cout << "Input Num";
    cin >> a;
    previous(a,b,c);
    cout << "Previous Num = "<< b << '\n' << "Next Num = " << c;
    return 0;
}