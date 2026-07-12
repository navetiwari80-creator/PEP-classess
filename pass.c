// // #include <stdio.h>
// // #include <string.h>
// // #include <conio.h>
// // void main(){
// //     char pass[30] = "admin123";
// //     char pass1[30];
// //     int  i = 0;
// //     char ch;
// //     //clrscr();
    
// //     printf ("Enter Password:");

// //     do{
// //         ch = getch();
// //         printf("*");
// //         pass1[i++]=ch;

// //     }
// //     while(ch != '\r');
// //     pass1[--i] = '\0' ;

// //     if(strcmpi(pass,pass1)==0){
// //         printf("\n Welcome . . . .");
// //     }
// //     else{
// //         printf("\nError");
// //     }
// // }

// // #include <stdio.h>
// // #include <string.h>
// // #include <conio.h>
// // void main(){
// //     char pass[30] = "admin123";
// //     char pass1[30];
// //     int  i = 0;
// //     char ch;
// //     //clrscr();
    
// //     printf ("Enter Password:");

// //     do{
// //         ch = getch();
// //         if(ch == '\b'){
// //             printf("\b \b");
// //             i--;
// //             continue;
// //         }
// //         printf("*");
// //         pass1[i++]=ch;

// //     }
// //     while(ch != '\r');
// //     pass1[--i] = '\0' ;

// //     if(strcmpi(pass,pass1)==0){
// //         printf("\n Welcome . . . .");
// //     }
// //     else{
// //         printf("\nError");
// //     }
// // }



// #include <stdio.h>
// #include <string.h>
// #include <conio.h>
// void main(){
//     char pass[30] = "admin123";
//     char pass1[30];
//     int  i = 0;
//     char ch;
//     //clrscr();
    
//     printf ("Enter Password:");

//     do{
//         ch = getch();
//         if(i == 0 && ch == '\b'){
//             continue;
//         }
//         if(ch == '\b'){
//             printf("\b \b");
//             i--;
//             continue;
//         }
//         printf("*");
//         pass1[i++]=ch;

//     }
//     while(ch != '\r');
//     pass1[--i] = '\0' ;

//     if(strcmpi(pass,pass1)==0){
//         printf("\n Welcome . . . .");
//     }
//     else{
//         printf("\nError");
//     }
// }


#include<stdio.h>

int main(){
    int i = 1;
    for(i<=10; i++; printf ("%d \n ", i));
}