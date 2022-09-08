#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtPosition(Node *&tail, Node *head, int Position, int d)
{
    // insert at start
    if (Position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < Position - 1)
    {
        temp = temp->next;
        count++;
    }
    // Insert at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    // creating a node for d
    Node *nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
}
int main()
{
    // Creating a new Node
    Node *node1 = new Node(10);
    // head point to node1;
    Node *head = node1;
    Node *tail = node1;

    print(head);
    insertAtTail(tail, 12);
    print(head);
