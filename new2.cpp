// #include<iostream>
// using namespace std;

// int main(){
//     int nums[] = {2, 7, 11, 15};
//     int target = 17;

//     int n = sizeof(nums) / sizeof(nums[0]);

//     for(int i = 0; i < n; i++){
//         for(int j=i+1; j<n; j++){

//             if(nums[i] + nums[j] == target){
//                 cout << "["<<i<<" , "<<j<<"]";
//                 return 0;
//             }
//         }
//     }

//     cout << "No Pair Found";
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int nums[] = {3,5,6,8,9,4,7};
//     int target = 14;

//     int n = sizeof(nums) / sizeof(nums[0]);

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){

//             if(nums[i] + nums[j] == target ){
//               cout << "["<<i<<", "<<j<<"]";
//               return 0;
//             }  
//         }
//     }
//     cout << "Pair Not Found: ";
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int nums[] = { 23, 54, 34,46, 74, 54,43};
//     int target = 128;

//     int n = sizeof(nums) / sizeof(nums[0]);
//     int count = 0;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){

//             if(nums[i] + nums[j] == target){
//                 cout << "["<<i<<", "<<j<<"]" << "-->" << nums[i] << "+" << nums[j] << endl;
//                 count++; 
//             }
//         }
//     }

//     cout << "\n Total Pair  =  " << count;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout << "Enter the First Value: ";
//     cin >> a;

//     cout << "Enter the Second Value: ";
//     cin >> b;

//     int avg = (a+b)/2;
//     cout << "Average : " <<  avg;
//     return 0;

// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 8;
//     int b = 6 , temp;

//     temp = a;
//     a = b;
//     b = temp;

//     cout << "A = " << a << endl;
//     cout << "B = " << b << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a, b, temp;
    
//     cout << "Enter The value of a: " ;
//     cin >> a;

//     cout << "Enter The value of b: ";
//     cin >> b;

//     temp = a;
//     a = b;
//     b = temp;

//     cout << "A = " << a << endl;
//     cout << "B = " << b << endl;

//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int a = 10, b = 32;

    a = a+b;
    b = a-b;
    a = a-b;

    cout << a << endl;
    cout << b << endl;

    return 0;
}