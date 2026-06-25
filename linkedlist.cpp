// #include <iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     Node* next;
// };

// int main()
// {
//     Node* head = NULL;

//     // First node
//     Node* first = new Node();
//     first->data = 10;
//     first->next = NULL;
//     head = first;

//     // Second node
//     Node* second = new Node();
//     second->data = 20;
//     second->next = NULL;

//     first->next = second;

//     // Print List
//     Node* temp = head;

//     while(temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int f = 1;
    int n = 5;

    for(int i = 1; i <= n; i++){
        f *= i;
    }
    
    cout << "Factorial no = " << f;

    return 0;
}

main()
char str[] = "Part-time musicians are semiconductors";
int a = 5;
printf (a> 10 ? "%50s" : "%s", str);
