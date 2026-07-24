// // LEAP YEAR

// #include<iostream>
// using namespace std;

// bool checkYear(int year){
//     if(year % 400 == 0){
//         return true;
//     }
//     else if(year % 100 == 0){
//         return false;
//     }
//     else if(year % 4 == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int year = 2000;

//     checkYear(year) ? cout << "Leap Year" : cout << "Not a Leap Year";
    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     bool leap = false;

//     cout << "Enter a Year: ";
//     cin >> n;

//     if(n % 400 == 0){
//        leap = true;
//     }
//     else if(n % 100 == 0){
//         leap = false;
//     }
//     else if(n % 4 == 0){
//         leap = true;
//     }
//     else{
//         return true;
//     }

//     if(leap){
//        cout << " Leap Year: " << n;
//     }else{
//     cout << "Not a Leap Year: " << n;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Year: ";
    cin >> n;

    if(n % 400 == 0){
        cout << n << "Leap Year : " ;
    }
    else if(n % 100 == 0){
        cout << n << "Not Leap Year : ";
    }
    else if(n % 4 == 0){
        cout << n << "Leap Year : ";
    }
    else{ 
       cout << n << "Not Leap Year : ";
    }
    
    return 0;
}