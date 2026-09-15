#include <iostream>
using namespace std;

class ArrayOperations {

    int arr[100];
    int size;

public:

    ArrayOperations() {
        size = 0;
    }

    // Insert Element
    void insert(int value) {

        arr[size] = value;
        size++;

        cout << value << " Inserted" << endl;
    }

    // Display Array
    void display() {

        cout << "Array Elements: ";

        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    // Search Element
    void search(int key) {

        for(int i = 0; i < size; i++) {

            if(arr[i] == key) {

                cout << key << " Found at Position "
                     << i << endl;

                return;
            }
        }

        cout << key << " Not Found" << endl;
    }

    // Update Element
    void update(int oldValue, int newValue) {

        for(int i = 0; i < size; i++) {

            if(arr[i] == oldValue) {

                arr[i] = newValue;

                cout << oldValue
                     << " Updated to "
                     << newValue << endl;

                return;
            }
        }

        cout << "Element Not Found" << endl;
    }

    // Delete Element
    void deleteElement(int value) {

        int pos = -1;

        for(int i = 0; i < size; i++) {

            if(arr[i] == value) {
                pos = i;
                break;
            }
        }

        if(pos == -1) {

            cout << "Element Not Found" << endl;

            return;
        }

        for(int i = pos; i < size - 1; i++) {

            arr[i] = arr[i + 1];
        }

        size--;

        cout << value << " Deleted" << endl;
    }
};

int main() {

    ArrayOperations a;

    // Insert
    a.insert(10);
    a.insert(20);
    a.insert(30);
    a.insert(40);

    // Display
    a.display();

    // Search
    a.search(30);

    // Update
    a.update(20, 25);

    // Display
    a.display();

    // Delete
    a.deleteElement(30);

    // Final Display
    a.display();

    return 0;
}