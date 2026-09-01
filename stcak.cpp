// // Paranthesis checker

// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     string s;
//     cout << "Give the data: ";
//     cin >> s;

//     stack<char> st;
//     for(int i=0; i<s.length(); i++){
//         if(s[i] == '('){
//             st.push('(');
//         }
//         else if(s[i] == ')'){
//             if(st. empty()){
//                 cout << "Not Balanced:";
//                 return 0;
//             }
//             st.pop();
//         }

//         if(st.empty()){
//             cout << "Balanced:";
//         }else{
//             cout << "Not Balanced:";
//         }
//         return 0;
//     }
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     string s;
//     cout << "Enter the data: ";
//     cin >> s;
//     stack<char> st;
//     for(int i = 0; i < s.length(); i++)
//     {
//         if(s[i] == '(' || s[i] == '{' || s[i] == '[')
//         {
//             st.push(s[i]);
//         }
//         else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
//         {
//             if(st.empty())
//             {
//                 cout << "Not Balanced";
//                 return 0;
//             }

//             if((s[i] == ')' && st.top() != '(') ||
//                (s[i] == '}' && st.top() != '{') ||
//                (s[i] == ']' && st.top() != '['))
//             {
//                 cout << "Not Balanced";
//                 return 0;
//             }

//             st.pop();
//         }
//     }

//     if(st.empty())
//         cout << "Balanced";
//     else
//         cout << "Not Balanced";

//     return 0;
// }



// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int arr[100];

//     cout << "Enter sorted elements: ";
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     stack<int> st;

//     for(int i = n - 1; i >= 0; i--)
//     {
//         if(i > 0 && arr[i] == arr[i - 1])
//         {
//             // Skip all duplicates
//             while(i > 0 && arr[i] == arr[i - 1])
//                 i--;
//         }
//         else
//         {
//             st.push(arr[i]);
//         }
//     }

//     cout << "Output: ";

//     while(!st.empty())
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Insert at end
void insert(Node *&head, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Delete duplicate nodes completely
Node* deleteDuplicates(Node *head)
{
    Node dummy;
    dummy.next = head;

    Node *prev = &dummy;
    Node *curr = head;

    while(curr != NULL)
    {
        if(curr->next != NULL && curr->data ==  curr->next->data)
        {
            int x = curr->data;

            while(curr != NULL && curr->data == x)
                curr = curr->next;

            prev->next = curr;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }

    return dummy.next;
}

// Display linked list
void display(Node *head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> value;
        insert(head, value);
    }

    head = deleteDuplicates(head);

    cout << "Linked List after removing duplicates: ";
    display(head);

    return 0;
}