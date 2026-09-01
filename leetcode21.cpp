#include <iostream>
using namespace std;

// Node Structure
struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Insert node at end
void insert(Node *&head, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Print Linked List
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data;
        if (head->next != NULL)
            cout << " -> ";

        head = head->next;
    }
    cout << endl;
}

// Merge Two Sorted Linked Lists
Node *mergeLists(Node *list1, Node *list2)
{
    Node dummy(0);      // Dummy Node
    Node *tail = &dummy;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data <= list2->data)
        {
            tail->next = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }

        tail = tail->next;
    }

    // Remaining Nodes
    if (list1 != NULL)
        tail->next = list1;

    if (list2 != NULL)
        tail->next = list2;

    return dummy.next;
}

int main()
{
    Node *list1 = NULL;
    Node *list2 = NULL;

    int n1, n2, value;

    cout << "Enter number of nodes in List 1: ";
    cin >> n1;

    cout << "Enter elements of List 1 (Sorted): ";
    for (int i = 0; i < n1; i++)
    {
        cin >> value;
        insert(list1, value);
    }

    cout << "Enter number of nodes in List 2: ";
    cin >> n2;

    cout << "Enter elements of List 2 (Sorted): ";
    for (int i = 0; i < n2; i++)
    {
        cin >> value;
        insert(list2, value);
    }

    cout << "\nList 1: ";
    display(list1);

    cout << "List 2: ";
    display(list2);

    Node *merged = mergeLists(list1, list2);

    cout << "\nMerged List: ";
    display(merged);

    return 0;
}



//class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // If one list is empty, return the other
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        ListNode* head = NULL;
        ListNode* tail = NULL;

        // Select the first node of merged list
        if (list1->val <= list2->val) {
            head = tail = list1;
            list1 = list1->next;
        }
        else {
            head = tail = list2;
            list2 = list2->next;
        }

        // Merge the remaining nodes
        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            }
            else {
                tail->next = list2;
                list2 = list2->next;
            }

            tail = tail->next;
        }

        // Attach remaining nodes
        if (list1 != NULL)
            tail->next = list1;
        else
            tail->next = list2;

        return head;
    }
};