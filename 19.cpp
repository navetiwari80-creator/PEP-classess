#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int  i = 1 , sum = 0;

    while(i <= n){
        sum = sum + i;
        i++;
    }

    cout << "Sum is = " << sum;
    return 0;
}