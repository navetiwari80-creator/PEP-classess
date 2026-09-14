#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
int main(){
    Node *head = NULL,*temp,*newNode;
    int n, value;

    cout << "Enter number of nodes:" ;
    cin >> n;

    for(int i = 1; i<=n; i++){
        newNode = new Node();
        cout << "Enter data for node" << i << ": ";
        cin >> value;

        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
        }else{
            temp = head;
            while(temp->next !=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    cout << "\nLinked List:";
    temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next; 
    }

    cout << "NULL";

    return 0;
}