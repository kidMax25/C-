// Adding two Numbers

#include <iostream>

using namespace std;

int addition(int a, int b){
    int result;
    result = a + b;
    return result;
}

int main(){
    int a,b, myResult;
    cout << "Input Number 1 --> ";
    cin >> a;
    cout << "Input Number 2 --> ";
    cin >> b;

    myResult = addition(a,b);
    cout << " The sum is: " << myResult;
    return 0;
}