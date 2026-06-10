#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int i = 1;
    double sum = 0;

    do
    {
        sum = sum + (double)i / (i + 1);
        i++;
    }
    while(i <= n);

    cout << "Sum = " << sum;

    return 0;
}