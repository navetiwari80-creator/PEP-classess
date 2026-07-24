#include<iostream>
using namespace std;

// int main(){
//     int arr[] = {5, 3, 8, 4, 2};
//     int n = 5;

//     for(int i = 0; i<n-1; i++){
//         for(int j = 0; j<n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }

//     cout << "Sorted Array: ";

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// int main(){

//     char arr[] = {'N', 'A', 'V', 'E', 'E', 'N'};
//     int n = 6;

//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j] < arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }

//     cout << "Sorted Array: ";

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " " ;
//     }

//     return 0;
// }


int main(){
    char arr[] = {'T', 'I', 'W', 'A', 'R', 'I'};
    int n = 6;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout << "Sorted Name: ";

    for(int i=0; i<n; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}