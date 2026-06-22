//Question no 1

#include<iostream>
//#include<cmath>
using namespace std;

// int main(){
//     cout << "Hello world";

//     return 0;
// }

//Question no 2

// int main(){
//     int a, b ;

//     cout << "Input the value of a : ";
//     cin  >> a;

//     cout << "Input the value of b : ";
//     cin  >> b;

//     cout << a + b << endl;

//     return 0; 
// }

//Question no  3

// int main()
// {
//     char c = 'A';
//     cout << "The ASCII value of " << 
//              c << " is " << int(c);
//     return 0;
// }

//Question no 4

// int main(){
//     int a = 10, b = 20 ,temp;

//     temp = a;
//     a = b;
//     b = temp;

//     cout << "Print the value of a: " << a <<  endl;
//     cout << "Print the value of b: " << b << endl;

//     return 0;
// }

//Question no 5;

// int main(){
//     int a = 5, b = 8;

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     cout << "print vlaue of a: "<< a << endl;
//     cout << "Print value of b: "<< b << endl;

//     return 0;
// }

//Question  no 6;

// int main(){
//     int integertype;
//     char chartype;
//     float floattype;
//     double doubletype;
//     long longtype;

//     cout << "Print size of int is: " << sizeof(integertype)<<endl;
//     cout << "Print size of char is: " << sizeof(chartype)<<endl;
//     cout << "Print size of float is: " << sizeof(floattype)<<endl;
//     cout << "Print size of double is: " << sizeof(doubletype)<<endl;
//     cout << "Print size of long is: " << sizeof(longtype)<<endl;

//     return 0;
// }

// Qurstion no 7;

// int main()
// {
//     double principal = 50000, rate = 3, time = 1;

//     double A = principal * ((pow((1 + rate / 100), time)));
//     double CI = A - principal;

//     cout << "Compound interest is: = " << CI;

//     return 0;
// }


//Question no 8;

// int main(){
//     int a;

//     cout << "Enter the no  of a: "<< endl;
//     cin >> a;

//     if(a % 2 == 0){
//         cout << "Even number is: " << a << endl; 
//     }
//     else{
//         cout << "Odd number is: " << a << endl;
//     }

//     return 0;
// }

//Question no 9

// int main() {
//     int a = 8, b = 3, c = 21;

//     if (a >= b) {
//         if (a >= c)
//             cout << a;
//         else
//             cout << c;
//     }
//     else {
//         if (b >= c)
//             cout << b;
//         else
//             cout << c;
//     }
//     return 0;
// }


//question no 10;

// int main()
// {
//     int a, b, c;
//     cout << "Number is: " << a ;
//     cin >> a ;
//     cout << "Number is: " << b ;
//     cin >> b ;
//     cout << "number is: " << c;
//     cin >> c;

//     if (a > b)
//     {
//         if (a > c)
//             cout << a;
//         else
//             cout << c;
//     }
//     else
//     {
//         if (b > c)
//             cout << b;
//         else
//             cout << c;
//     }

//     return 0;
// }


//Question no 11

// bool checkYear(int year)
// {
//     if (year % 400 == 0) {
//         return true;
//     }
//     else if (year % 100 == 0) {
//         return false;
//     }
//     else if (year % 4 == 0) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }

// int main()
// {
//     int year = 1900;
//     checkYear(year) ? cout << "Leap Year" : cout << "Not a Leap Year";
//     return 0;
// }

//Question no 12


// int main()
// {
//     int year;

//     cout << "Enter the year: ";
//     cin >> year;

//     if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//     {
//         cout << year << " is a Leap Year" << endl;
//     }
//     else
//     {
//         cout << year << " is Not a Leap Year" << endl;
//     }

//     return 0;
// }

//Question no 13

