// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// class Queue {
//     Node* front;
//     Node* rear;

// public:
//     Queue() {
//         front = rear = NULL;
//     }

//     // Insert at last
//     void enqueue(int value) {
//         Node* newNode = new Node(value);

//         if (rear == NULL) {
//             front = rear = newNode;
//         }
//         else {
//             rear->next = newNode;
//             rear = newNode;
//         }

//         cout << value << " inserted into queue" << endl;
//     }

//     // Delete from first
//     void dequeue() {
//         if (front == NULL) {
//             cout << "Queue Underflow" << endl;
//             return;
//         }

//         Node* temp = front;
//         cout << temp->data << " removed from queue" << endl;

//         front = front->next;

//         if (front == NULL)
//             rear = NULL;

//         delete temp;
//     }

//     // Display queue
//     void display() {
//         if (front == NULL) {
//             cout << "Queue is empty" << endl;
//             return;
//         }

//         Node* temp = front;

//         cout << "Queue elements: ";
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Queue q;

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);

//     q.display();

//     q.dequeue();

//     q.display();

//     return 0;
// }




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

class Stack {
    Node* head;

public:
    Stack() {
        head = NULL;
    }

    // Push operation (insert at end)
    void push(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
        }
        else {
            Node* temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }

        cout << value << " pushed into stack" << endl;
    }

    // Pop operation (delete from end)
    void pop() {
        if (head == NULL) {
            cout << "Stack Underflow" << endl;
            return;
        }

        // Only one node present
        if (head->next == NULL) {
            cout << head->data << " popped from stack" << endl;
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;

        // Reach second last node
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        cout << temp->next->data << " popped from stack" << endl;

        delete temp->next;
        temp->next = NULL;
    }

    // Peek operation
    void peek() {
        if (head == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        cout << "Top element: " << temp->data << endl;
    }

    // Display stack
    void display() {
        if (head == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node* temp = head;

        cout << "Stack elements are: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();

    s.display();

    return 0;
}