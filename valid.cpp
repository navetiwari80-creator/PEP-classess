// #include<iostream>
// #include<stack>
// using namespace std;

// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;

//         for (char ch : s) {
//             if (ch == '(' || ch == '{' || ch == '[') {
//                 st.push(ch);
//             } else {
//                 if (st.empty()) return false;

//                 char top = st.top();
//                 st.pop();

//                 if ((ch == ')' && top != '(') ||
//                     (ch == '}' && top != '{') ||
//                     (ch == ']' && top != '[')) {
//                     return false;
//                 }
//             }
//         }

//         return st.empty();
//     }
// };


#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
            cout << a;
        else
            cout << c;
    }
    else
    {
        if (b > c)
            cout << b;
        else
            cout << c;
    }

    return 0;
}