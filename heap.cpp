#include<iostream>
using namespace std;

void insertheap(int a[], int &n, int item){
    n = n + 1;
    int ptr = n;
    int par;

    while(ptr > 1){
        par = ptr / 2;
        if(item <= a[par]){
            break;
        }
        a[ptr] = a[par];
        ptr = par;
    }
    a[ptr] = item;
}

int deleteheap(int a[], int &n){
    if(n == 0){
        cout << "Heap is empty, nothing to delete\n";
        return -1; // or throw/handle as needed
    }

    int root = a[1];
    int last = a[n];
    n -= 1;

    int i = 1;
    while(i * 2 <= n){
        int child = i * 2;
        if(child + 1 <= n && a[child + 1] > a[child]){
            child = child + 1;
        }

        if(last >= a[child]){
            break;
        }

        a[i] = a[child];
        i = child;
    }

    if(n > 0){
        a[i] = last;
    }

    return root;
}

void displayheap(int arr[], int n){
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){
    int arr[10];
    int n = 0;

    insertheap(arr, n, 70);
    insertheap(arr, n, 80);
    insertheap(arr, n, 10);
    insertheap(arr, n, 60);
    insertheap(arr, n, 50);

    cout << "Before deletion: ";
    displayheap(arr, n);

    int removed = deleteheap(arr, n);
    if(removed != -1){
        cout << "Deleted head (root): " << removed << "\n";
    }

    cout << "After deletion: ";
    displayheap(arr, n);

    return 0;
}