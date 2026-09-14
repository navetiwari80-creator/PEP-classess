#include<iostream>
using namespace std;

struct Node{
    int bookingID;
    string customerName;
    Node* next;
    Node* prev;

    Node(int id, string name) {
        bookingID = id;
        customerName = name;
        next = NULL;
        prev = NULL;
    }
};

class VIPReversation{
    Node* head;

public:
    VIPReservation() {
        head = NULL;
    }
    
    void insertAtBeginning(int id, string name) {
        Node* newNode = new Node(id, name);

        if (head == NULL) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

        cout << "Reservation Added Successfully!\n";
    }
};
