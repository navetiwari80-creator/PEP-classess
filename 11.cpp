// sum of digit using while & do while

// #include<iostream>
// using namespace std;
// int main(){
//     int num, sum = 0;

//     cout << "Enter a Number: ";
//     cin >> num;
    
//     while(num > 0){
//         sum = sum + (num % 10);
//         num = num / 10;
//     }

//     cout << "Sum of Digits = " << sum;

//     return 0;

// }

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    do
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    while(num > 0);

    cout << "Sum of digits = " << sum;

    return 0;
}