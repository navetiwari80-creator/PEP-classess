#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to display linked list
void display(Node* head) {
    while(head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node *head = NULL, *newNode;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    // Creating initial linked list
    for(int i = 1; i <= n; i++) {
        newNode = new Node();
        cout << "Enter data for node " << i << ": ";
        cin >> value;

        newNode->data = value;
        newNode->next = head;
        head = newNode;   // Insert at beginning while creating
    }

    cout << "\nOriginal Linked List:\n";
    display(head);

    // Insert new node at beginning
    cout << "\nEnter value to insert at beginning: ";
    cin >> value;

    newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    cout << "\nUpdated Linked List:\n";
    display(head);

    return 0;
}
