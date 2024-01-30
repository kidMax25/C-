#include <iostream>

using namespace std;

// Recursive Factorial Function
long factorial(long a)
{
    if (a > 1) {
        return (a * factorial(a - 1));
    } else {
        return 1;
    }
}

// Recursive Factorial Function with By Reference Parameter
void factorialByReference(long n, long &result)
{
    if (n > 1) {
        result *= n;  // Multiply current number to result (passed by reference)
        factorialByReference(n - 1, result);  // Recursive call
    }
}

int main()
{
    long x, r = 1;
    cout << "Input a number to compute factorial --> ";
    cin >> x;

    // Using Recursive Factorial Function
    cout << "Factorial using recursion --> " << factorial(x) << endl;

    // Using Recursive Factorial Function with By Reference Parameter
    factorialByReference(x, r);
    cout << "Factorial using recursion and by reference --> " << r << endl;

    return 0;
}
