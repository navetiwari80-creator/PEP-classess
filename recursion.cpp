//Question no 1


// #include<iostream>
// using namespace std;

// int factorial(int n)
// {
//     if(n==0 || n==1)
//         return 1;

//     return n * factorial(n-1);
// }

// int main()
// {
//     cout<<factorial(5);
// }

//Question no 2

// #include<iostream>
// using namespace std;

// int sum(int n)
// {
//     if(n==1)
//         return 1;

//     return n+sum(n-1);
// }

// int main()
// {
//     cout<<sum(5);
// }

//Question no 3  Using power function

// #include<iostream>
// using namespace std;

// int power(int a,int b)
// {
//     if(b==0)
//         return 1;

//     return a*power(a,b-1);
// }

// int main()
// {
//     cout<<power(2,5);
// }

//Question no 4 fiboancci series

// #include<iostream>
// using namespace std;

// int fib(int n)
// {
//     if(n==0)
//         return 0;

//     if(n==1)
//         return 1;

//     return fib(n-1)+fib(n-2);
// }

// int main()
// {
//     cout<<fib(6);
// }


//Question no 5  reverse counting

// #include<iostream>
// using namespace std;

// void reverse(int n)
// {
//     if(n==0)
//         return;

//     cout<<n<<" ";

//     reverse(n-1);
// }

// int main()
// {
//     reverse(5);
// }


//Question no 6 forward counting

// #include<iostream>
// using namespace std;

// void forward(int n)
// {
//     if(n==0)
//         return;

//     forward(n-1);

//     cout<<n<<" ";
// }

// int main()
// {
//     forward(5);
// }

//Question no 7 Armstrong no

// #include<iostream>
// #include<cmath>
// using namespace std;

// int armstrong(int n,int digits)
// {
//     if(n==0)
//         return 0;

//     return pow(n%10,digits)+armstrong(n/10,digits);
// }

// int main()
// {
//     int num=153;
//     int digits=3;

//     if(armstrong(num,digits)==num)
//         cout<<"Armstrong";
//     else
//         cout<<"Not Armstrong";
// }

//Question no 8

// #include<iostream>
// using namespace std;

// void print(int n)
// {
//     if(n==0)
//         return;

//     print(n-1);

//     cout<<n<<" ";
// }

// int main()
// {
//     print(10);
// }

//Question no 9

// #include<iostream>
// using namespace std;

// int product(int n)
// {
//     if(n==1)
//         return 1;

//     return n*product(n-1);
// }

// int main()
// {
//     cout<<product(5);
// }

//Question no 10

#include<iostream>
using namespace std;

int minimum(int arr[],int n)
{
    if(n==1)
        return arr[0];

    return min(arr[n-1],minimum(arr,n-1));
}

int main()
{
    int arr[]={4,8,2,20,7};

    cout<<minimum(arr,5);
}