#include <iostream>
using namespace std;

class Node {

public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {

    Node* head;

public:

    LinkedList() {
        head = NULL;
    }

    // Insert at Beginning
    void insertAtBeginning(int value) {

        Node* newNode = new Node(value);

        newNode->next = head;

        head = newNode;
    }

    // Insert at End
    void insertAtEnd(int value) {

        Node* newNode = new Node(value);

        if(head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Insert at Position
    void insertAtPosition(int value, int pos) {

        Node* newNode = new Node(value);

        if(pos == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;

        for(int i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete from Beginning
    void deleteFromBeginning() {

        if(head == NULL) {
            cout << "List Empty" << endl;
            return;
        }

        Node* temp = head;

        head = head->next;

        delete temp;
    }

    // Delete from End
    void deleteFromEnd() {

        if(head == NULL) {
            cout << "List Empty" << endl;
            return;
        }

        if(head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;

        while(temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;

        temp->next = NULL;
    }

    // Delete by Value
    void deleteByValue(int value) {

        if(head == NULL) {
            return;
        }

        if(head->data == value) {

            Node* temp = head;

            head = head->next;

            delete temp;

            return;
        }

        Node* temp = head;

        while(temp->next != NULL &&
              temp->next->data != value) {

            temp = temp->next;
        }

        if(temp->next != NULL) {

            Node* nodeToDelete = temp->next;

            temp->next = temp->next->next;

            delete nodeToDelete;
        }
    }

    // Search Element
    void search(int key) {

        Node* temp = head;

        while(temp != NULL) {

            if(temp->data == key) {
                cout << key << " Found" << endl;
                return;
            }

            temp = temp->next;
        }

        cout << key << " Not Found" << endl;
    }

    // Display Linked List
    void display() {

        Node* temp = head;

        while(temp != NULL) {

            cout << temp->data << " -> ";

            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main() {

    LinkedList list;

    // Insert Operations
    list.insertAtBeginning(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtPosition(25, 3);

    cout << "Linked List:" << endl;
    list.display();

    // Search Operation
    list.search(20);

    // Delete Operations
    list.deleteFromBeginning();
    list.deleteFromEnd();
    list.deleteByValue(25);

    cout << "After Deletion:" << endl;
    list.display();

    return 0;
}