// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int size, int target) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == target) {
//             return i;  // Return index if found
//         }
//     }
//     return -1;  // Return -1 if not found
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 30;

//     int result = linearSearch(arr, size, target);

//     if (result != -1)
//         cout << "Element found at index " << result << endl;
//     else
//         cout << "Element not found" << endl;

//     return 0;
// }

// Linear Search using a Recursive call

// #include<iostream>
// using namespace std;
// int linearSearch (int arr[], int n, int key, int index){
//     //Base case
//     if(index == n){
//         return -1;
//     }
//     //if element found

//     if(arr[index] == key){
//         return index;
//     }

//     //Recursive call

//     return linearSearch(arr, n, key, index+1);
// }

// int main(){
//     int arr [] = {10,20,30,40,50};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int key = 30;
    
//     int result = linearSearch(arr, n, key, 0);
//     if(result != -1){
//         cout<<"element found at index  " << result;
//     }else{
//         cout<<"Element not found  ";
//     }

//     return 0;
// }

//reverse 

#include <iostream>
using namespace std;

int reverseLinearSearch(int arr[], int key, int index) {
    // Base case
    if (index < 0) {
        return -1;
    }

    // Element found
    if (arr[index] == key) {
        return index;
    }

    // Recursive call
    return reverseLinearSearch(arr, key, index - 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = reverseLinearSearch(arr, key, n - 1);

    if (result != -1) {
        cout << "Element found at index " << result;
    } else {
        cout << "Element not found";
    }

    return 0;
}