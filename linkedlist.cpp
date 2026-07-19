// #include<iostream>
// using namespace std;

// class Node{
//     public:

//     int data;
//     Node* next;

//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };

// class Linkedlist{
//     Node* head;
//     public:

//     Linkedlist(){
//         head = NULL;
//     }

//     void insertatBegining(int value){
//         Node* newNode = new Node(value);
//         newNode -> next = head;
//         head = newNode;
//     }

//     void insertatEnd(int value){
//         Node* newNode = new Node (value);
//         if(head == NULL){
//             head = newNode;
//             return ;
//         }
//         Node* temp = head;
//         while(temp-> next != NULL){
//             temp = temp -> next;
//         }

//         temp -> next = newNode;
//     }

//     void insertatPostion (){
//         Node* newNode = new Node(value);
//         if(pos == 1){
//             newNode -> next = head;
//             head = newNode;
//             return ;
//         }   

//         Node* temp = head;
//         for(int i=1; i<pos-1; i++){
//             temp = temp-> next;
//         }

//         newNode->next = temp ->next;
//         temp -> next = newNode;
//     }

//     void deleteatbegining(){
//         if(head == NULL){
//             cout << "List Empty:" << endl;
//             return ;
//         }

//         Node* temp = head;
//         head = head-> next;
//         delete temp;
//     }
   
//     void deleteend(){
//         if(head == NULL){
//             cout << "List Empty: " << endl;
//             return ;
//         }

//         if(head -> next == NULL){
//             delete head;
//             head = NULL;
//             return;
//         }

//         Node* temp = temp;
//         while(temp-> next-> next != NULL){
//             temp = temp -> next; 
//         }

//         delete temp-> next;
//         temp -> next = NULL;
//     }

//     void deletebyvalue(){
//         if(head == NULL){
//             return;
//         }

//         if(head-> data == value){
//             Node* temp = head;
//             head = head -> next;
//             delete temp;
//             return ;
//         }

//         Node* temp = head;
//         while(temp -> next != NULL &&  temp -> next -> data != value){
//             temp = temp -> next; 
//         }

//         if(temp -> next != NULL){
//             Node* Nodetodelete = temp -> next;
//             temp -> next = temp -> next -> next;
//             delete Nodetodelete; 
//         } 
//     }

//     void Search(int key){
//         Node* temp = head;
//         while(temp != NULL){
//             if( temp -> data == key){
//                 cout << key << "Found" << endl;
//                 return ;
//             }
//             temp = temp -> next;
//         }
//         cout << key << "Not Found: " << endl;
//     }

//     void Display (){
//         Node* temp = head;
//         while(temp != NULL){
//             cout << temp -> data << " -> ";
//             temp = temp -> next; 
//         }
//         cout<< "NUll" << endl;
//     }

// };

// int main(){
//     Linkedlist list;

//     list.insertatBegining(10);
//     list.insertatEnd(20);
//     list.insertatEnd(30);
//     list.insertatPostion(25, 3);

//     cout << "Linked List: " << endl;
//     list.Display();

//     list.search(20);

//     list.deleteatbegining();
//     list.deleteend();
//     list.deletebyvalue(25);

//     cout << "After Deletion: " << endl;
//     list.Display();

//     return 0;
// }


// // #include <iostream>
// // using namespace std;

// // struct Node
// // {
// //     int data;
// //     Node* next;
// // };

// // int main()
// // {
// //     Node* head = NULL;

// //     // First node
// //     Node* first = new Node();
// //     first->data = 10;
// //     first->next = NULL;
// //     head = first;

// //     // Second node
// //     Node* second = new Node();
// //     second->data = 20;
// //     second->next = NULL;

// //     first->next = second;

// //     // Print List
// //     Node* temp = head;

// //     while(temp != NULL)
// //     {
// //         cout << temp->data << " ";
// //         temp = temp->next;
// //     }

// //     return 0;
// // }


// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int f = 1;
// //     int n = 5;

// //     for(int i = 1; i <= n; i++){
// //         f *= i;
// //     }
    
// //     cout << "Factorial no = " << f;

// //     return 0;
// // }

// // main()
// // char str[] = "Part-time musicians are semiconductors";
// // int a = 5;
// // printf (a> 10 ? "%50s" : "%s", str);












#include <iostream>
using namespace std;

struct Node{
    public:

    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class Linkedlist{
    Node* head;
    public:

    Linkedlist(){
       head = NULL;
    } 

    void insertatbegining(int  value){
        Node* newNode = new Node(value);
        newNode -> next = head;
        head = newNode;
    }


    void insertatend(int value){
        Node* newNode = new Node (value);
        if(head == NULL){
            head = newNode;
            return ;
        }
        Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newNode;
    }


    void insertatPosition(int value, int pos){
        Node* newNode = new Node(value);
        if( pos == 1){
            newNode -> next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        for(int i = 1; i<pos-1; i++){
            temp = temp 
        }
    }



}
