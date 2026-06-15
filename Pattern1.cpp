//Pattern 1

#include<iostream>
using namespace std;

// int main(){
//     for(int i = 1; i<=5; i++){
//         for(int j=1; j<=5; j++){
//             cout<<"*";
//         }
//         cout  <<  endl;
//     }
//     return 0;

// }

// Pattern 2

// int main(){
//     for(int i = 1; i<=5; i++){
//         for(int j=1; j<=5; j++){
//             cout<<i;
//         }
//         cout  <<  endl;
//     }
//     return 0;
// }

//Pattern 3

// int main(){
//     for(int i = 1; i<=5; i++){
//         for(int j=1; j<=5; j++){
//             cout<<j;
//         }
//         cout  <<  endl;
//     }
//     return 0;
// }

//Pattern 4

// int main(){
//     for(int i = 5; i>=1; i--){
//         for(int j=1; j<=5; j++){
//             cout<<i;
//         }
//         cout  <<  endl;
//     }
//     return 0;
// }

//Pattern 5

// int main(){
//     for(int i = 5; i>=1; i--){
//         for(int j=5; j>=1; j--){
//             cout<<j;
//         }
//         cout  <<  endl;
//     }
//     return 0;
// }

//Pattern 6

// int main(){
//     int n = 5,k = 1;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<k++<<" ";
//         }
//         cout  <<  endl;
//     }
//     return 0;
// }

//Pattern 7 

// int main(){
//     int n = 5, x = 1;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//            cout<<x<<" ";
//            x += 2;
//         }
//       cout<<endl;
//     }
//    return 0;
// }


//Pattern 8

// int main(){
    

//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=i; j++){
//            cout<<"*"<< " " ;
           
//         }
//       cout<<endl;
//     }
//    return 0;
// }

//Pattern 9

// int main(){
    

//     for(int i=5; i>=1; i--){
//         for(int j=1; j<=i; j++){
//            cout<<"*"<< " " ;
           
//         }
//       cout<<endl;
//     }
//    return 0;
// }

//Pattern 10

// int main(){
    

//     for(int i=5; i>=1; i--){
//         for(int j=1; j>=i; j++){
//            cout<<"*"<< " " ;
           
//         }
//       cout<<endl;
//     }
//    return 0;
// }

//Pattern 11
// int main(){
//     int n = 5;
//     for(int i = 1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<(i*j)<<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//Pattern 12

// int main(){
//     int n = 5;
//     for(int i = 1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout << ((i+j)%2) << " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Pattern 13

// int main(){
//     int n = 1;
//     for(int i = 5; i>=n; i--){
//         for(int j=1; j>=n; j--){
//             cout << ((i+j)%2) << " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Pattern 14

// int main(){
//     int n = 5;
//     for(int i = 1; i<=n; i++){
//         for(int j=0; j<=n; j++){
//             cout << ((i+j)%2) << " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Pattern 15

// int main(){
//     int n = 5;
//     for(int i = 1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout << ((i*j)%2) << " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//Pattern 16

// int main(){
//     int n = 5;
//     for(int i = 1; i<=n; i++){
//         for(int j=0; j<=n; j++){
//             cout << ((i*j)%2) << " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Pattern 17

// int main(){
//     int n = 5;
//     for(int i = 1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout << (i%2) << " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//Pattern 18

// int main(){
//     int n = 5;
//     for(int i = 1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout << (j%2) << " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Pattern 19

// int main(){
//     int n = 5;
//     for(int i = 1; i<=n; i++){
//         for(int j=0; j<=n; j++){
//             cout << (j%2) << " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Pattern 20

int main(){
    char i,j;
    for(int i = 'A'; i<='E'; i++){
        for(int j='A'; j<='E'; j++){
            cout << char(i)<< " ";
        }
        cout<<endl;
    }
    return 0;
}