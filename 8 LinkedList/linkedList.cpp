#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *takeInput_atTail()
{
    int data;
    cin >> data;
    Node *head = NULL; // Linked list is Empty
    Node *tail = NULL; // Linked list is Empty

    while (data != -1)
    { // If the data passed is "-1" then only stop
        // create a LL

        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        } // if we have one node only
        cin >> data;
    }
    return head;
}

Node *takeInput_atHead()
{
    int data;
    cin >> data;
    Node *head = NULL; // Linked list is Empty
    Node *tail = NULL; // Linked list is Empty

    while (data != -1)
    { // If the data passed is "-1" then only stop
        // create a LL

        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            n->next = head; /// Inserting at head
            head = n;
        } // if we have one node only
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " => ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main()
{
    // Node n1(1);
    // Node n2(2);
    // Node n3(3);
    // // linking the tail of n1 with head of n2
    // n1.next = &n2;
    // n2.next = &n3;
    // // creating a pointer called head, to store address of first node;
    // Node *head = &n1;
    // print(head);

    // Dynamic calling.
    Node *head = takeInput_atHead();
    print(head);
    return 0;
}
