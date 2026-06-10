#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int i = 1;
    double sum = 0;

    do
    {
        sum = sum + 1.0 / i;
        i++;
    }
    while(i <= n);

    cout << "Sum = " << sum;

    return 0;
}