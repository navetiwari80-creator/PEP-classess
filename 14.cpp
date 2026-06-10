#include <iostream>
using namespace std;

int main()
{
    int num = 7;
    int i = 2;
    bool prime = true;

    while(i < num)
    {
        if(num % i == 0)
        {
            prime = false;
            break;
        }
        i++;
    }

    if(prime && num > 1)
        cout << num << " is Prime";
    else
        cout << num << " is Not Prime";

    return 0;
}