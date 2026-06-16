#include<iostream>
using namespace std;

int main(){
    int fv = 10,c=0;
    for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
            for(int k=1; k<=6; k++){
                if(fv == (i+j+k)){
                   c++;
                    cout << i << " " << j << " " << k << endl; 
                }
            }
        }
    }
    cout << c;
} 