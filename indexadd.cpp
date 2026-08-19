#include<iostream>
using namespace std;

// int main(){
//     int nums[] = {2,5,7,4,9,10};
//     int target = 12;

//     int n = sizeof(nums) / sizeof (nums[0]);
//     int count = 0;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(nums[i] + nums[j] == target){
//                 cout<< "["<<i<<","<<j<<"]" << "--->" << nums[i] << "+" << nums[j] << endl;                               
//                 return count++;
                
//             }
//         }
//     }

//     cout<< "not pair found: ";
//     return 0;

// }


// int indexadd(int nums[], int n, int target, int count){
//     for(int i = 0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(nums[i] + nums[j] == target){
                
//                 cout << "["<<i<<","<<j<<"]";
                
//                 return 1;
//             }
//         }
//     }
//     cout << "Pair not found: ";
//     return 0; 
// }

// int main(){
//     int nums[] = {2,3,4,7,9,1};
//     int target = 5;
//     int count = 0;

//     int n = sizeof(nums) / sizeof (nums[0]);
//     indexadd(nums, n, target, count);
//     return 0;
// }

// int indexadd(int nums[], int n, int target){
//     int count = 0;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(nums[i] + nums[j] == target){
//                 cout << " ["<<i<<","<<j<<"]" << endl;
//                 count++;
//             }
//         }
//     }

//     if(count == 0){
//         cout << "Pair not found: ";
//     }

//     return count;
// }

// int main(){
//     int nums[] = {3,4,7,5,2,8,1,9};
//     int target = 12;

//     int n = sizeof(nums)/ sizeof(nums[0]);
//     int total = indexadd(nums, n,target);
//     cout << "Total pairs: " << total <<endl;

//     return 0;
// }


// void calculate(int a, int b, int c){
//     int avg = (a+b+c)/3;
//     cout << avg << endl;
// }

// int main(){
//     int calculate(4, 5, 3);
//     return 0;
// }

// int calculate(int a, int b, int c) {
//     int avg = (a + b + c) / 3;
//     return avg;
// }

// int main() {
//     int result = calculate(4, 5, 3);

//     cout << result;

//     return 0;
// }

// int main(){
//     int a = 8;
//     int b = 5;

//     a = a+b;
//     b = a-b;
//     a = a-b;

//     cout <<"A = "<< a << endl;
//     cout << "B = " << b << endl;

//     return 0;
// }

// int main(){
//     int a = 10;
//     int b = 20;
//     int temp = 0;

//     temp = a;
//     a = b;
//     b = temp;

//     cout <<"A = "<< a << endl;
//     cout << "B = " << b << endl;

//     return 0;
// }



// int main(){
//     int a = 100;
//     int b = 200;

//     a = a^b;
//     b = b^a;
//     a = a^b;

//     cout <<"A = "<< a << endl;
//     cout << "B = " << b << endl;

//      return 0;
// }

// void swap(int a, int b){
//     a = a^b;
//     b = b^a;
//     a = a^b;

//     cout <<"A = "<< a << endl;
//     cout << "B = " << b << endl;
// }

// int main(){
//     swap(10,20);
// }


//FARHENHEIT TO CELCIUS

// int main(){
//     int fahrenheit = 72;
//     int celcius;

//     celcius = (fahrenheit -32)*5/9;
//     cout << "Celcius = " << celcius << endl;

//     return 0;
// }

// int main(){
//     int farhenheit;
//     int celcius;
//     cout << "Farhenheit = " ;
//     cin >> farhenheit;

//     celcius = (farhenheit - 32) * 5/9;
//     cout <<"Celcius = " << celcius << endl;

//     return 0;
// }

// void temp(int fahrenheit, int celcius){
//     celcius = (fahrenheit - 32)* 5/9;
//     cout << "Celcius = " << celcius << endl;
// }
// int main(){
//     int farhenheit = 72;
//     int celcius;

//     int temp();
// }

// NO ARGUMENT + NO RETURN 

// void temp(){
//     int fahrenheit = 68;
//     int celcius = (fahrenheit - 32)*5/9;
//     cout << "Celcius = " << celcius;
// }

// int main(){
//     temp();
//     return 0;
// }

//ARGUMENT + NO RETURN

// void temp(int fahrenheit){
//     int celcius = (fahrenheit - 32)* 5/9;
//     cout << "Celicus = " << celcius;
// }
// int main(){
//     temp(64);
//     return 0;
// }

//NO ARUGMENT + RETURN 

// int temp(){
//     int fahrenheit = 76;
//     return(fahrenheit - 32)*5/9;
// }

// int main(){
//     int celcius = temp();
//     cout << "Celcius = " << celcius;
//     return 0;
// }


//ARGUMENT + RETURN

// int temp(int farhenheit){
//     return(farhenheit - 32)* 5/9;
// }
// int main(){
//     int celcius = temp(78);
//     cout << "Celcius = " << celcius;

//     return 0;
// }

// int temp(int celcius){
//     return(celcius*9/5) + 32;
// }

// int main(){
//     int celcius = 25;
//     int fahrenheit = temp(celcius);
//     cout << "Fahrenheit = " << fahrenheit << endl;
//     return 0;

// }

// #include <iostream>
// using namespace std;

// double calculate(double celsius) {
//     return (celsius * 9.0 / 5.0) + 32;
// }

// int main() {
//     double celsius = 25;

//     double fahrenheit = calculate(celsius);

//     cout << "Fahrenheit = " << fahrenheit << endl;

//     return 0;
// }


// void sumdigit(int num){
//     int sum = 0;
//     while(num>0){
//        sum = sum + (num % 10);
//        num = num/10;
//     }   
//     cout << "Sum of digits : " << sum ;
// }

// int main(){
//     int num ;
//     cin >> num;

//     sumdigit(num);
//     return 0;
// }

