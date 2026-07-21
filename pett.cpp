// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;


//     for(int i = 0; i<=n; i++){
//         for(int j=1; j<= i+1; j++){
//             cout << " " "*" " ";
//         }
//         cout << endl;
//     }
//     return 0;
    
// }

#include<iostream>
using namespace std;

int main(){
    
    int min_stars = 1;
    int p_hight = 5;

    int p_space=p_hight-1;

    int i,j,k;

    for(int i = 0; i<p_hight; i++){
        for(int j=p_space; j> i; j--){
            cout << " " ;
        }
        for(int k=0; k<min_stars; k++){
            cout << "*";
        }
        min_stars += 2;
        cout << endl;
    }
    return 0;
    
}