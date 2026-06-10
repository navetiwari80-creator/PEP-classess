#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int fact = 2;

    do
    {
        fact = fact * num;
        num--;
    }
    while(num > 0);

    cout << "Factorial = " << fact;

    return 0;
}