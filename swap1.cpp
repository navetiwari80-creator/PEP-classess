// #include<iostream>
// using namespace std;

// int main(){
//     int  a = 20;
//     int  b = 30;

//     a = a+b;
//     b = a-b;
//     a = a-b;

//     cout << a << endl;
//     cout << b << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int  a = 20;
//     int  b = 30;
//     int   temp;

//     temp  = a;
//     a = b;
//     b = temp;

//     cout << a << endl;
//     cout << b << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int farhenheit = 68;
//     int celcius;

//     celcius = (farhenheit - 32) * 5/9;
//     cout << "Celcius = " << celcius;

//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;

    cout << "Enter a Number : " ;
    cin >> num;

    while(num > 0){
        sum = sum + (num % 10);
        num = num / 10;
    }

    cout << "Sum of digits = " << sum;

    return 0;
}