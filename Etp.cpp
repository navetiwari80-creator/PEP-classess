#include <iostream>
using namespace std;

class Node {
public:
    string coach;
    Node* next;
};

Node* head = NULL;

void addCoach(string name) {

    Node* newNode = new Node();
    newNode->coach = name;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
    }
    else {
        Node* temp = head;

        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void removeCoach(string name) {

    if(head == NULL) {
        cout << "Train is empty\n";
        return;
    }

    if(head->coach == name) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL && temp->next->coach != name) {
        temp = temp->next;
    }

    if(temp->next == NULL) {
        cout << "Coach not found\n";
    }
    else {
        Node* del = temp->next;
        temp->next = temp->next->next;
        delete del;
    }
}

void display() {

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->coach << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main() {

    addCoach("Engine");
    addCoach("S1");
    addCoach("S2");
    addCoach("S3");

    cout << "Train Coaches:\n";
    display();

    removeCoach("S2");

    cout << "\nAfter Removing Damaged Coach:\n";
    display();

    return 0;
}