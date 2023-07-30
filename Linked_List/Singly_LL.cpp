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

void deleteNode(int pos, node* &head)
{
    if(pos == 1)
    {
        node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    } 
    else
    {
        //Deleting middle and last node
        node* curr = head;
        node* prev = NULL;

        int count = 1;
        while(count < pos)
        {
            prev = curr;
            curr = curr -> next;
            count++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
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

    print(head);

    cout<<"Head = "<< head ->data <<endl;
    cout<<"Tail = "<< tail ->data <<endl;
    
    cout<<"----------------------\n";
    
    print(head);

    insertAtTail(tail, 12);

    print(head);

    insertAtTail(tail, 15);

    print(head);

    cout<<"Head = "<< head ->data <<endl;
    cout<<"Tail = "<< tail ->data <<endl;

    cout<<"----------------------\n";

    print(head);

    insertAtPosition(head, tail, 4, 22);

    print(head);

    insertAtPosition(head, tail, 5, 30);
 
    print(head);

    cout<<"----------------------\n";

    deleteNode(2, head);

    print(head);
}
