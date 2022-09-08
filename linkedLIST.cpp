// Implement

/*#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    //construtor
    node(int data)
    {
this->data=data;
this->next=NULL;
    }


};

int main()
{
    node* node1=new node(1000);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    return 0;
}

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // construtor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAthead(Node *&head, int data);
{
    // new node creat
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// traverse linked list
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // creat a new node
    Node *node1 = new Node(10);

    // head point to node1

    Node *head = Node1;
    print(head);
    intsertAthead(head, 12);
    print(head);
    insertAthead(head, 15);
    print(head);
    return 0;
}

#include<iostream>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    linkedListTraversal(head);
    return 0;
}

//insertion

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    return ptr;
}

// Case 2
struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3
struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Case 4
struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;


    return head;
}


int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    // head = insertAtFirst(head, 56);
    // head = insertAtIndex(head, 56, 1);
    // head = insertAtEnd(head, 56);
    head = insertAfterNode(head, third, 45);
    printf("\nLinked list after insertion\n");
    linkedListTraversal(head);


    return 0;
}


// delete node
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1: Deleting the first element from the linked list
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2: Deleting the element at a given index from the linked list
struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

// Case 3: Deleting the last element
struct Node * deleteAtLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}


// Case 4: Deleting the element with a given value from the linked list
struct Node * deleteAtIndex(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }

    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);

    // head = deleteFirst(head); // For deleting first element of the linked list
    // head = deleteAtIndex(head, 2);
    head = deleteAtLast(head);
    printf("Linked list after deletion\n");
    linkedListTraversal(head);

    return 0;
}

//write a program to demonstrate the size of pointer
//of diffrent data types

 #include<iostream>
 using namespace std;
 struct node{long int a;}*s;
 int main()
 {
     int *p;
     float *f;
     char *c;

  cout<<"integer pointer size : ="<<sizeof(p)<<endl;
  cout<<"float pointer size : ="<<sizeof(f)<<endl;
 cout<<"struct pointer size : ="<<sizeof(s)<<endl;
 cout<<"char = :"<<sizeof(c)<<endl;
 return 0;
 }


//write a programe to create a simple linked list

#include<iostream>
using namespace std;
struct list
{
    int n;
    int *p;

};
int main()
    {
        struct list item0,item1,item2;
        item2.n=3;
        item2.p=NULL;
        item1.n=5;
        item1.p=&item2.n;
        item0.n=7;
        item0.p=&item1.n;
        cout<<" linked list elements are :"<<endl;
        cout<<item0.n<<endl;
        cout<<*item0.p<<endl;
        cout<<*item1.p<<endl;
      //  cout<<*item1.p<<endl;
        //cout<<*item2.p<<endl;
        cout<<*item2.p<<endl;
                return 0;
    }


//reverse a linked list
#include <iostream>
using namespace std;


struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList {
    Node* head;
    LinkedList() { head = NULL; }


    void reverse()
    {


        Node* current = head;
        Node *prev = NULL, *next = NULL;

        while (current != NULL) {

            next = current->next;


            current->next = prev;


            prev = current;
            current = next;
        }
        head = prev;
    }


    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};


int main()
{

    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);

    cout << "Given linked list\n";
    ll.print();

    ll.reverse();

    cout << "\nReversed Linked list \n";
    ll.print();
    return 0;
}

//write a programe to display string using linked list
// language C

#include<iostream>
//#include<malloc.h>
using namespace std;
struct node
{
    char str[30];
    struct node *next;
};
typedef struct node linked;
int main()
{
    linked *begin,node1,node2,node3,node4;
    int j;
   // printf("\n enter four word four lines :-\n");
   cout<<"Enter four word in four line :-"<<endl;

    begin=(struct node*)malloc(sizeof(linked));
    begin=&node1;
    gets(node1.str);
    node1.next=&node2;
    gets(node2.str);
    node2.next=&node3;
    gets(node3.str);
    node3.next=&node4;
    gets(node4.str);
    node4.next=NULL;

    do
    {
        begin=begin->next;
        //printf("%s",begin->str);

        cout<<begin->str<<endl;
    } while (begin->next!=NULL);


}


//write a program to insert an element at the begning
#include<stdio.h>
#include<malloc.h>
struct num
{
    int num;
    struct num *next;
}*header,*first,*rear;
int main()
{
    void atbeg(void);
    void create (void);
    void show(void);
    printf("\n operation creation : ");
    create();
    show();
    atbeg();

    printf("\n element after insertion : ");
    show();
    atbeg();
    show();
    atbeg();
    show();
}
void create(void)
{
    struct num *node;
    printf("\n enter number (0 to exit):");
    if(header==NULL)
    {
        first=(struct num*)malloc(sizeof(struct num));
        scanf("%d",&first->num);
        first->next=header;
        header=first;
        rear=first;
    }
    while(1)
    {
        node=(struct num*)malloc(sizeof(struct num));
        scanf("%d",&node->num);
        if(node->num==0)break;
        node->next=NULL;
        rear->next=node;
        rear=node;
    }
}
void atbeg()
{
    struct num *node,*t;
    node=(struct num*)malloc(sizeof(struct num));
    printf("\n insert an element at starting : ");
    scanf("%d",&node->num);
    t=first;
    header=node;
    header->next=t;
    first=header;

}
void show()
{
printf("\nLinked list element are :");
while(header!=NULL)
{
    printf("\nlinked list element are :");
    while(header!=NULL)
    {
        printf("%d",header->num);
        header=header->next;
    }
}

}


#include<iostream>
using namesoace std;
int linearsearch(int arr[],int n,int key )
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
}

// Implement
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // construtor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int main()
{
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    return 0;
}*/

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // construtor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head, int data)
{
    // new node creat
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// traverse linked list
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp;
    }
    cout << endl;
}
int main()
{
    // creat a new node
    Node *node1 = new Node(10);

    // head point to node1

    Node *head = node1;
    print(head);
    
   /*intsertAtHead (head, 12);
    print(head);
    
    insertAthead(head, 15);
    
    print(head);
    */
    return 0;
}

