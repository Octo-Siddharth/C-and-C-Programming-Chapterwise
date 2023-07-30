//Build a tree from level order traversal
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

void buildFromLevelOrder(node* &root)
{
    queue<node*> q;
    cout<<"Enter the data for root : "<<endl;
    int data;
    cin>> data;
    root = new node(data);
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout<<"Enter the left node for :"<<temp -> data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1)
        {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter the right node for :"<<temp -> data<<endl;
        int rightData;
        cin>> rightData;

        if(rightData != -1)
        {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
}
    
int main()
{
    node* root = NULL;
    //root = buildTree(root);
    buildFromLevelOrder(root);
    cout<<"Printing the tree from level order traversal >>>"<< endl;
    levelOrderTraversal(root);

    return 0;
}