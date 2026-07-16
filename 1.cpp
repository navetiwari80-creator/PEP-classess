// // // Neon number

// // // C++ program to check and print
// // // Neon Numbers upto 10000
// // #include <iostream>
// // using namespace std;
// // #include <math.h>

// // int checkNeon(int x)
// // {
// //     // Storing the square of x
// //     int sq = x * x;

// //     // Calculating the sum of 
// //     // digits of sq
// //     int sum_digits = 0;
// //     while (sq != 0) 
// //     {
// //         sum_digits = sum_digits + sq % 10;
// //         sq = sq / 10;
// //     }
// //     return (sum_digits == x);
// // }

// // // Driver Code
// // int main(void)
// // {
// //     // Printing Neon Numbers upto 10000
// //     for (int i = 1; i <= 10000; i++) 
// //         if (checkNeon(i))
// //             cout << i << " ";    
// // }



// #include <stdbool.h>
// #include <stdio.h>

// bool isPrime(int n) {

//     // Checking primality by finding a complete division
//   	// in the range 2 to n-1
//     if (n <= 1)
//         return false;
//     for (int i = 2; i < n; i++) {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// void findPrimes(int l, int r) {

//     // Flag to check if any prime numbers are found
//     bool found = false;
//     for (int i = l; i <= r; i++) {

//         // Checking if the number is prime
//         if (isPrime(i)) {
//             printf("%d ", i);
//             found = true;
//         }
//     }
//     if (!found) {
//         printf(
//             "No prime numbers found in the given range.");
//     }
// }

// int main() {
//     int l = 10, r = 30;
	
//   	// Finding and printing the prime between [l, r]
//     findPrimes(l, r);
  
//     return 0;




#include<iostream>
using namespace std;

int main()
{
    int arr[8] = {16, 17, 4, 3, 5, 2, 9, 13};
    int big, f;

    cout << "[";

    for(int i = 0; i < 7; i++)
    {
        f = 0;
        big = arr[i];

        for(int j = i + 1; j < 8; j++)
        {
            if(big < arr[j])
            {
                f = 1;
                break;
            }
        }

        if(f == 0)
        {
            cout << big << ", ";
        }
    }

    cout << arr[7] << "]";

    return 0;
}