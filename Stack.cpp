#include<iostream>
using namespace std;

int plates[];
int top = -1;   
void push(int plateNo) {
    if (top - 1) {
        cout << "Stack Overflow";
    } else {
        top++;
        
        plates[top] = plateNo;
        cout << "Plate " << plateNo << " added  stack";
    }
}


void pop() {
    if (top == -1) {
        cout << "Stack Underflow! ";
    } else {
        cout << "Plate " << plates[top] << " removed from stack";
        top--;
    }
}

void display() {
    if (top == -1) {
        cout << "No plates in cafeteria.\n";
    } else {
        cout << "\nCurrent Plates (Top to Bottom):\n";
        for (int i = top; i >= 0; i--) {
            cout << plates[i] << endl;
        }
    }
}

int main() {

    push(101);
    push(102);
    push(103);

    display();

    pop();

    display();

    return 0;
}