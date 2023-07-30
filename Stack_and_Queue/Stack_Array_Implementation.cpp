#include<iostream>
#include<stack>

using namespace std;

class Stack {
    public :
        int * arr;
        int top;
        int size;

        //Constructor
        Stack(int s)
        {
            this -> size = s;
            arr = new int[s];
            top = -1;
        }

        //Stack functions
        void push(int element)
        {
            if(size - top > 1)
            {
                arr[top] = element;
                top++;
            }
            else
            {
                cout<<"Stack Overflow !!"<<endl;
            }
        }

        void pop()
        {
            if(top >= 0)
            {
                top--;
            }
            else
            {
                 cout<<"Stack Underflow !!"<<endl;
            }
        }

        int peek()
        {
            if(top >= 0)
            {
                return arr[top];
            }
            else
            {
                cout<<"The stack is empty !!"<<endl;
                return -1;
            }
        }

        bool isEmpty()
        {
            if(top == -1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    Stack st(10);

    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);
    st.push(66);
    st.push(77);
    st.push(88);

    cout<<"Stack is : "<< st.peek() <<endl;

    st.pop();

    cout<<"Stack is : "<< st.peek() <<endl;

    st.pop();

    cout<<"Stack is : "<< st.peek() <<endl;

    st.pop();

    cout<<"Stack is : "<< st.peek() <<endl;

    if(st.isEmpty())
    {
        cout<<"Stack is empty !!"<<endl;
    }
    else
    {
        cout<<"Stack is not empty !!"<<endl;
    }

}