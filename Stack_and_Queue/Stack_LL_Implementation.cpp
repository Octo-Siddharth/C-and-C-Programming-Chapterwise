#include<iostream>
#include<stack>

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
            int value = this -> data;
            while(this -> next != NULL)
            {
                this -> next = NULL;
                delete next;
            }
            cout<<"Memory deleted with the value as "<<value<<endl;
        }
};

class Stack{
    public:
        int size;
        node* head;

        //Constructor
        Stack()
        {
            head = NULL;
            size = 0;
        }

        void push(int element)
        {
            node* temp = new node(element); 
            temp -> data = element;
            temp -> next = head;
            head = temp;
        }

        void pop()
        {
            if(head == NULL)
            {
                cout<<"Stack is Empty"<<endl;
            }
            else
            {
                node* temp = head;
                head = head -> next;
                delete temp;
            }
        }

        int peak()
        {
            if(head != NULL)
            {
                int val = head -> data;
                return val;
            }
            else
            {
                return -1;
            }
        }

        bool isEmpty()
        {
            if(head == NULL || head -> next == NULL)
            {
                return head;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<"The stack top is : "<<st.peak()<<endl;

    st.pop();
    st.pop();

    cout<<"The stack top is : "<<st.peak()<<endl;

    if(st.isEmpty())
    {
        cout<<"Stack is empty !!"<<endl;
    }
    else
    {
        cout<<"Stack is not empty !!"<<endl;
    }
}