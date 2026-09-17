// #include<iostream>
// using namespace std;

// int count(int n){
//     int cnt = 0;
//     while(n > 0){
//         int lastdigit = n%10;
//         cnt = cnt + 1;
//         n = n/10;
//     }
//     return cnt;
// }
// int main(){
//     int n;
//     cin >> n;

//     cout << count(n);

//     return 0;

// }



#include<iostream>
using namespace std;

// int count (long long n){
//     long cnt = 0;
//     while(n>0) {
//         long lastdigit = n%10;
//         cnt = cnt + 1;
//         n = n/10;
//     }
//     return cnt;
// }
// int main(){
//     long long n;
//     cin >> n;
//     cout << count(n);
//     return 0;
// }


// int main(){
//     int n; 
//     cin >> n;
//     int revNum = 0;
//     while(n>0){
//         int id = n%10;
//         revNum = (revNum*10) + id;
//         n = n/10;
//     }

//     cout << revNum;
// }

int main(){
    int n;
    cin >> n;
    int revNum = 0;
    int dup = n;
    while(n > 0){
        int id = n % 10;
        revNum = (revNum*10) + id;
        n = n/10;
    }
    if(dup == revNum){
        cout << "true";
    }else{
        cout << "false";
    }

    return 0;
}

int palindrome(int n){
    int revnum = 0;
    int dup = 0;
    while(n > 0){
        int id = n % 10;
        revnum =(revnum * 10) + id;
        n = n/10;
    }
    if(dup == revnum){
        cout << "true";
    }
    else{
        cout << "false";
    }
}

int main(){
    int n;
    cin >> n;
    cout << palindrome(n);
    return 0;
}