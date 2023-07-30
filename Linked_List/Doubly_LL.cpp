#include<bits/stdc++.h>

using namespace std;

class node {
    public:
    int data;
    node* prev;
    node* next;

    //constructor
    node(int data)
    {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    //destructor
    ~node() 
    {
        int val = this -> data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node with data !!"<< val <<endl;
    }
};

int getLength(node* head)
{
    int len = 0;
    node* temp = head;
    if(temp != NULL)
    {
        len++;
        temp = temp -> next;
    }

    return len;
}

void insertAtHead(node* &head, node* &tail, int data)
{
    if(head == NULL)
    {
        node* temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node* temp = new node(data);
        temp -> next = head;
        head -> prev = temp;
        head = temp; 
    }
}

void insertAtTail(node* &head, node* &tail, int data)
{
    if(tail == NULL)
    {
        node* temp = new node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        node* temp = new node(data);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp; 
    }
}

void insertAtPosition(node* &head, node* &tail, int pos, int data)
{
    //Insert at start
    if(pos == 1)
    {
       insertAtHead(head, tail, data);
       return;
    }
    node* temp = head;
    int count = 1;

    while(count < pos - 1)
    {
        temp = temp -> next;
        count++;
    }

    //Insert at tail
    if(temp -> next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    //Creating a node for data

    node* nodeToInsert = new node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int pos, node* &head)
{
    //deleting first or start

    if(pos == 1)
    {
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        node* curr = head;
        node* prev = NULL;

        int count = 1;
        while(count < pos)
        {
            prev = curr;
            curr = curr -> next;
            count++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}

void print(node* head)
{
    node* temp = head;

    while(temp != NULL)
    {
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main()
{
    node* head = NULL;
    node* tail = NULL;

    insertAtHead(head, tail, 11);
    print(head);
   

    insertAtHead(head, tail, 13);
    print(head);
  
    insertAtHead(head, tail, 8);
    print(head);

    insertAtHead(head, tail, 35);
    print(head);
  
    insertAtTail(head, tail, 25);
    print(head);

    insertAtTail(head, tail, 30);
    print(head);

    insertAtTail(head, tail, 40);
    print(head);

    insertAtTail(head, tail, 45);
    print(head);
    cout<<"----------------------\n";
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(head, tail, 2, 100);
    print(head);

    insertAtPosition(head, tail, 3, 102);
    print(head);

    insertAtPosition(head, tail, 4, 103);
    print(head);
    cout<<"----------------------\n";
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    cout<<"----------------------\n";

    deleteNode(3, head);
    cout<<"----------------------\n";
    print(head);

    cout<<"----------------------\n";
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

}