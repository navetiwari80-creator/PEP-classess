#include <iostream>
using namespace std;

int main()
{
    int n = 20;
    int i = 1, sum = 0;

    while(i <= n)
    {
        if(i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;

        i++;
    }

    cout << "Sum = " << sum;

    return 0;
}