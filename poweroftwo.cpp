// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     while(n>1){
//         if(n%2 != 0){
//             cout<<"Not Power of two:" ;
//             return 0;
//         }
//         n /= 2;
//     }
//     cout << "Power of two: " << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
    
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n > 0 && (n & (n - 1)) == 0)
//         cout << n << " is a Power of 2";
//     else
//         cout << n << " is NOT a Power of 2";

//     return 0;
// }

//Question no 3  count digits

// #include<iostream>
// using namespace std;

// int main(){
//     int num, count = 0;
//     cout << "Enter a number:";
//     cin >> num;

//     if(num == 0){
//         cout << 1;
//     }else{
//         while(num != 0){
//             num = num/10;
//             count++;
//         }
//     }

//     cout << "No of digits: "<< count;
//     return 0;
// }


//Fibancci series Question no 4  recursion

// #include<iostream>
// using namespace std;

// int fib(int n){
//     if(n <= 1){
//         return n;
//     }

//     return fib(n-1) + fib(n+2);
// }

// int main(){
//     int n;
//     cin >> n;

//     for(int i=0; i<n; i++){
//         cout << fib(i) << " ";
//     }
//     return 0;
// }

//Question no 5

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, a = 0, b = 1, c;

//     cout << "Enter number of terms: ";
//     cin >> n;

//     cout << "Fibonacci Series: ";

//     for (int i = 1; i <= n; i++)
//     {
//         cout << a << " ";

//         c = a + b;
//         a = b;
//         b = c;
//     }

//     return 0;
// }

//Question no 6

#include<iostream>
using namespace std;

int main(){
    int n, x, y, z;

    cout << "Enter a number: ";
    cin >> n;
    
    x = 0, y = 1, z = 0;

    while( z <= n){
        cout << z << " ";
        x = y;
        y = z;
        z = x+y;
    }
    return 0;
}