#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    int a = 0, b = 1, c, i = 1;

    cout << a << " " << b << " ";

    while(i <= n - 2)
    {
        c = a + b;
        cout << c << " ";

        a = b;
        b = c;

        i++;
    }

    return 0;
}