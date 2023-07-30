//Implementation of in order, pre order and post order traversals
#include<bits/stdc++.h>

using namespace std;
class node {
    public:
        int data;
        node* left;
        node* right;

   
    node(int d) 
        {
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }  
};

node* buildTree(node* root)
{
    cout<<"Enter the data : "<< endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout<<"Enter data for Left node : "<< endl;
    root -> left = buildTree(root -> left);
    cout<<"Enter data for Right node : "<< endl;
    root -> right = buildTree(root -> right);

    return root;
} 

void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<< temp -> data <<" ";
            if(temp -> left)
            {
                q.push(temp -> left);
            }

            if(temp -> right)
            {
                q.push(temp -> right);
            }
        }
       
    }
    
}

void inOrder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    inOrder(root -> left);
    cout<< root -> data <<" ";
    inOrder(root -> right);

}

void preOrder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<< root -> data <<" ";
    inOrder(root -> left);
    inOrder(root -> right);

}

void postOrder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    inOrder(root -> left);
    inOrder(root -> right);
    cout<< root -> data <<" ";

}

int main()
{
    node* root = NULL;
    root = buildTree(root);
    cout<<"Printing level order traversal >>>"<< endl;
    levelOrderTraversal(root);

    cout<<"Printing inOrder Traversal : "<<endl;
    inOrder(root);

    cout<<"\nPrinting preOrder Traversal :"<<endl;
    preOrder(root);

    cout<<"\nPrinting postOrder Traversal :"<<endl;
    postOrder(root);

    return 0;
}