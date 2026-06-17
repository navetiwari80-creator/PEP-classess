// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 10, b = 20;
//     int *p = &a;
//     int *q = &b;

//     int temp = *p;
//     *p = *q;
//     *q = temp;

//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;

//     return 0;
// }            



//question no 1

#include<iostream>
using namespace std;

// int main()
// {
//     int a = 10;

//     int *p = &a;   // Pointer p stores address of a

//     cout << "Value of a = " << a << endl;
//     cout << "Address of a = " << &a << endl;
//     cout << "Value stored in p = " << p << endl;
//     cout << "Value pointed by p = " << *p << endl;

//     return 0;
// }


// question no 2

// int main()
// {
//     int a = 50;

//     int *p = &a;

//     cout << "Address of a = " << p << endl;

//     return 0;
// }

//question no 3


// int main()
// {
//     int a = 10;

//     int *p = &a;

//     cout << *p << endl;

//     return 0;
// }

// question no 4

// int main()
// {
//     int a = 10, b = 20;

//     int *p = &a;
//     int *q = &b;

//     int temp = *p;
//     *p = *q;
//     *q = temp;

//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;

//     return 0;
// }

//question no 5

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int x = 10, y = 20;

//     swap(&x, &y);

//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;

//     return 0;
// }


//question no 6

// int main()
// {
//     int a = 10, b = 20;

//     int *p = &a;
//     int *q = &b;

//     int sum = *p + *q;

//     cout << "Sum = " << sum << endl;

//     return 0;
// }

//question no 7

// int main()
// {
//     int a = 15, b = 25;

//     int *p = &a;
//     int *q = &b;

//     if(*p > *q)
//         cout << *p << " is greater";
//     else
//         cout << *q << " is greater";

//     return 0;
// }

//question no 8

// int main()
// {
//     char str[] = "Naveen";

//     char *p = str;
//     int len = 0;

//     while(*p != '\0')
//     {
//         len++;
//         p++;
//     }

//     cout << "Length = " << len;

//     return 0;
// }

//question no 9

// int main()
// {
//     char str1[] = "Hello";
//     char str2[20];

//     char *p = str1;
//     char *q = str2;

//     while(*p != '\0')
//     {
//         *q = *p;
//         p++;
//         q++;
//     }

//     *q = '\0';   // End the copied string

//     cout << "Original String : " << str1 << endl;
//     cout << "Copied String   : " << str2 << endl;

//     return 0;
// }

//question no 10

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main()
// {
//     char str[] = "Hello";

//     char *start = str;
//     char *end = str + strlen(str) - 1;

//     while(start < end)
//     {
//         char temp = *start;
//         *start = *end;
//         *end = temp;

//         start++;
//         end--;
//     }

//     cout << "Reversed String = " << str;

//     return 0;
// }

//Question no 10

// int main()
// {
//     char str[] = "Education";

//     char *p = str;
//     int count = 0;

//     while(*p != '\0')
//     {
//         if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' ||
//            *p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U')
//         {
//             count++;
//         }

//         p++;
//     }

//     cout << "Number of vowels = " << count;

//     return 0;
// }

//Question no 11

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};

//     int *p = arr;   

//     for(int i = 0; i < 5; i++)
//     {
//         cout << *p << " ";
//         p++;
//     }

//     return 0;
// }

//Question no 12

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};

//     int *p = arr;

//     for(int i = 0; i < 5; i++)
//     {
//         cout << *(p + i) << " ";
//     }

//     return 0;
// }

//Question no 13

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};

//     int *p = arr;
//     int sum = 0;

//     for(int i = 0; i < 5; i++)
//     {
//         sum = sum + *p;
//         p++;
//     }

//     cout << "Sum = " << sum;

//     return 0;
// }

//question no 14

// int main()
// {
//     int arr[] = {10, 50, 30, 80, 20};

//     int *p = arr;
//     int max = *p;

//     for(int i = 1; i < 5; i++)
//     {
//         p++;

//         if(*p > max)
//         {
//             max = *p;
//         }
//     }

//     cout << "Largest Element = " << max;

//     return 0;
// }

//question no 15

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int *start = arr;
    int *end = arr + 4;   // Last element

    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Reversed Array: ";

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
