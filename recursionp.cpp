// #include<iostream>
// using namespace std;

// void printNums(int n){
//     if(n == 1){
//         cout << 1;
//         return;      
//     }

//     cout << n << " ";
//     printNums(n-1);
// }

// int main(){
//     printNums(4);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// void printNums(int n){
//     if(n == 1){
//         cout << 1;
//         return ;
//     }

//     cout << n << " ";
//     printNums(n-1);
// }

// int main(){
//     printNums(5);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int sum (int n) {
//     if( n == 1){
//         return 1;
//     }

//     return n + sum(n-1);
// }

// int main(){
//     cout << sum(5) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int sum (int n){
//     if(n == 1){
//         return 1;
//     }

//     return n + sum (n-1);
// }

// int main(){

//     cout << sum(100) << endl;
//     return 0;
// }

//Prime Number with Recursion

// #include<iostream>
// using namespace std;

// bool isPrime(int n , int i){

//     // int i=2, current = 2;

//     if(n <= 1){
//         return false;
//     }
//     if(i * i > n){
//         return true;
//     }
//     if(n % i == 0){
//         return false;   
//     }

//     return isPrime(n, i+1);
// }

// void printPrime(int n, int current)
// {
//     if(current > n)
//         return;

//     if(isPrime(current, 2))
//         cout << current << " ";

//     printPrime(n, current + 1);   
// }


// int main(){
//     int n;
//     cout << "Enter the Number: ";
//     cin >> n;

//     cout << "Prime Numbers are: " ;
//     printPrime(n, 2);
//     return 0;
// }



#include<iostream>
using namespace std;

bool isPrime(int n, int i){
    if(n <= 1){
        return false;
    }
    if(i*i>n){
        return true;
    }
    if(n % i == 0){
        return false;
    }

    return isPrime(n, i+1);
}

void printPrime(int n, int current){
    if(current > n){
        return;
    }
    if(isPrime(current, 2)){
        cout << current << " ";
    }
    printPrime(n, current+1);
}

int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    cout << "Prime Numbers are: ";
    printPrime(n, 2);
    return 0;
}