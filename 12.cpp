// #include <iostream>
// using namespace std;

// int main()
// {
//     int num = 12345;
//     int reverse = 0;

//     while(num > 0)
//     {
//         reverse = reverse * 10 + num % 10;
//         num = num / 10;
//     }

//     cout << "Reversed number = " << reverse;

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int num = 12345;
    int rev = 0;

    do{
        rev = rev * 10  +  num % 10;
        num = num / 10;
    }

    while(num > 0);

    cout << "Reversed No = " << rev;
    return 0;

}