#include <iostream>
using namespace std;

int main()
{
    int num = 153;
    int temp = num;
    int sum = 0, digit;

    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }

    if(sum == num)
        cout << num << " is an Armstrong Number";
    else
        cout << num << " is not an Armstrong Number";

    return 0;
}