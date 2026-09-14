#include <iostream>
using namespace std;

#define MAX 50

int stack[MAX];
int top = -1;


bool isEmpty() {
    return (top == -1);
}


void push(int plate) {
    if (top == MAX - 1) {
        cout << "Stack Overflow! Cannot add more plates." << endl;
    } else {
        top++;
        stack[top] = plate;
        cout << "Plate " << plate << " pushed into stack." << endl;
    }
}

/* Pop operation */
void pop() {
    if (isEmpty()) {
        cout << "Stack Underflow! No plates to remove." << endl;
    } else {
        cout << "Plate " << stack[top] << " popped from stack." << endl;
        top--;
    }
}

int main() {
    int choice, plate;

    do {
        cout << "\n--- Stack Menu (50 Plates) ---" << endl;
        cout << "1. Push Plate" << endl;
        cout << "2. Pop Plate" << endl;
        cout << "3. Check Is Empty" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter plate number: ";
            cin >> plate;
            push(plate);
            break;

        case 2:
            pop();
            break;

        case 3:
            if (isEmpty())
                cout << "Stack is Empty." << endl;
            else
                cout << "Stack is NOT Empty." << endl;
            break;

        case 4:
            cout << "Exiting program." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
