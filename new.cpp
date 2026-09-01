// #include <iostream>
// using namespace std;

// int removeDuplicates(int nums[], int n) {

//     int i = 0;

//     for (int j = 1; j < n; j++) {

//         if (nums[j] != nums[i]) {
//             i++;
//             nums[i] = nums[j];
//         }
//     }

//     return i + 1;
// }

// int main() {

//     int nums[] = {1, 1, 2, 2, 3};
//     int n = 5;

//     int k = removeDuplicates(nums, n);

//     cout << "Unique elements: ";

//     for (int i = 0; i < k; i++) {
//         cout << nums[i] << " ";
//     }

//     cout << "\nTotal: " << k;

//     return 0;
// }




#include <iostream>
using namespace std;

int removeDuplicates(char arr[], int n) {

    int i = 0;

    for (int j = 1; j < n; j++) {

        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}

int main() {

    char arr[] = {'N', 'A', 'V', 'E', 'E', 'N' 'T'};
    int n = 6;

    int k = removeDuplicates(arr, n);

    cout << "Unique elements: ";

    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nTotal: " << k;

    return 0;
}