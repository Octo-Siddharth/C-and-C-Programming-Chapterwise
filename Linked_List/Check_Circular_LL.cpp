// Check circular LL or not
#include<bits/stdc++.h>

using namespace std;

class node{
    public:
        int data;
        node* next;

     //Constructor
     node(int data)
     {
         this -> data = data;
         this -> next = NULL;
     }
     //Destructor
     ~node()
     {
         int value = this ->data;
         if(this ->next != NULL)
         {
             delete next;
             this -> next = NULL;
         }
         cout<<"Memory is free for node with data !!"<<value<<endl;
     }   
};

void insertAtHead(node* &head, int data)
{
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
}
void insertAtTail(node* &tail, int data)
{
    node* temp = new node(data);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(node* &head, node* &tail, int position, int data)
{
    if(position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    node* temp = head;
    int count = 1;

    while(count < position - 1)
    {
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    node* nodeToinsert = new node(data);
    nodeToinsert -> next = temp -> next;
    temp -> next = nodeToinsert;

}
void print(node* &head)
{
    if(head == NULL)
    {
        cout<<"List is empty !! "<< endl;
        return;
    }
    node* temp = head;

    while(temp != NULL)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

bool isCircularList(node* head)
{
    if(head == NULL)
    {
        return true;
    }
    
    node* temp = head -> next;

    while(temp != NULL && temp != head)
    {
        temp = temp -> next;
    }

    if(temp == head)
    {
        return true;
    }
    
    return false;
}

int main()
{
    node* n1 = new node(10);
    cout<<n1 -> data <<endl;
    cout<<n1 -> next <<endl;
    cout<<"----------------------\n";

    //Head pointed to node
    node* head = n1;
    node* tail = n1;
    print(head);

    insertAtHead(head, 12);

    print(head);

    insertAtHead(head, 15);
    insertAtHead(head, 25);

    print(head);

    if(isCircularList(tail))
    {
        cout<<"The Linked List is circular in nature !!"<<endl;
    }
    else
    {
        cout<<"The Linked List is not circular !!"<<endl;
    }
}