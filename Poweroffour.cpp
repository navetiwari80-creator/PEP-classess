// #include <iostream>
// using namespace std;

// bool isPowerOfFour(int n) {
//     if (n <= 0)
//         return false;

//     while (n % 4 == 0) {
//         n = n / 4;
//     }

//     return n == 1;
// }

// int main() {
//     int n;

//     cout << "Enter a number: ";
//     cin >> n;

//     if (isPowerOfFour(n))
//         cout << "True";
//     else
//         cout << "False";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool isPowerOfFour(int n) {
//     if (n <= 0)
//         return false;

//     while (n % 4 == 0) {
//         cout << "Before divide: " << n << endl;
//         n = n / 4;
//         cout << "After divide : " << n << endl;
//     }

//     cout << "Final n = " << n << endl;

//     return (n == 1);
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << isPowerOfFour(n);
// }


#include <iostream>
using namespace std;

bool isPowerOfFour(int n) {
    if (n <= 0)
        return false;

    while (n % 4 == 0) {
        n = n / 4;
    }

    return (n == 1);
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfFour(n))
        cout << "True";
    else
        cout << "False";

    return 0;
}