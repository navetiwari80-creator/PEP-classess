#include <iostream>
using namespace std;

struct Node {
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

class VIPReservation {
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

    void displayForward() {
        Node* temp = head;
        cout << "\nVIP List (Forward):\n";
        while (temp != NULL) {
            cout << "Booking ID: " << temp->bookingID 
                 << ", Name: " << temp->customerName << endl;
            temp = temp->next;
        }
    }

    void displayBackward() {
        Node* temp = head;

        if (temp == NULL) return;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        cout << "\nVIP List (Backward):\n";
        while (temp != NULL) {
            cout << "Booking ID: " << temp->bookingID 
                 << ", Name: " << temp->customerName << endl;
            temp = temp->prev;
        }
    }

    void search(int id) {
        Node* temp = head;

        while (temp != NULL) {
            if (temp->bookingID == id) {
                cout << "\nCustomer Found!\n";
                cout << "Booking ID: " << temp->bookingID
                     << ", Name: " << temp->customerName << endl;
                return;
            }
            temp = temp->next;
        }

        cout << "\nBooking ID not found!\n";
    }
};

int main() {
    VIPReservation system;

    system.insertAtBeginning(101, "Naveen");
    system.insertAtBeginning(102, "Rahul");
    system.insertAtBeginning(103, "Amit");

    system.displayForward();
    system.displayBackward();

    system.search(102);

    return 0;
}