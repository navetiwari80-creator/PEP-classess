#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int *start = arr;
    int *end = arr + 4;

    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    cout << "Reversed Array: " ;

    for(int i=0; i<5; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}