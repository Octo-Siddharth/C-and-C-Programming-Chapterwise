//All traversals and insertion in BST
#include<bits/stdc++.h>
using namespace std;

class node{
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

node* minVal(node* root)
{
    node* temp = root;
    while (temp -> left != NULL)
    {
        temp = temp -> left;
    }
    return temp;
}

node* maxVal(node* root)
{
    node* temp = root;
    while (temp -> right != NULL)
    {
        temp = temp -> right;
    }
    return temp;
}

node* deleteFromBST(node* root, int val)
{
    if(root == NULL)
    {
        return root;
    }
    if(root -> data == val)
    {
        //0 child
        if(root -> left == NULL && root -> right == NULL)
        {
            delete root;
            return NULL;
        }
        //1 child
        //for left
        if(root -> left != NULL && root -> right == NULL)
        {
            node* temp = root -> left;
            delete root;
            return temp;
        }
        //for right
        if(root -> left == NULL && root -> right != NULL)
        {
            node* temp = root -> right;
            delete root;
            return temp;
        }
        //2 child
        if(root -> left != NULL && root -> right != NULL )
        {
            int mini = minVal(root -> right) -> data;
            root -> data = mini;
            root -> right = deleteFromBST(root -> right, mini);
            return root;
        }

    }
    else if(root -> data > val)
    {
        root -> left = deleteFromBST(root -> left, val);
        return root;
    }
    else
    {
        root -> right = deleteFromBST(root -> right, val);
        return root;
    }
}

node* insertintoBST(node* root, int data)
{
    if( root == NULL)
    {
        root = new node(data);
        return root;
    }
    if(data > root -> data)
    {
        root -> right = insertintoBST(root -> right, data);
    }
    else
    {
        root -> left = insertintoBST(root -> left, data);
    }
    return root;
}
void takeInput(node* &root)
{
    int data;
    cin>> data;

    while (data != -1)
    {
         root = insertintoBST(root, data);
         cin >> data;
    }
    
}
int main()
{
    node* root = NULL;
    cout<<"Enter data to print BST : "<<endl;
    takeInput(root);
    cout<<"\nPrinting the BST : "<<endl;
    levelOrderTraversal(root);

    cout<<"\nPrinting inOrder Trversal : "<<endl;
    inOrder(root);

    cout<<"\nPrinting preOrder Trversal : "<<endl;
    preOrder(root);

    cout<<"\nPrinting postOrder Trversal : "<<endl;
    postOrder(root);

    cout<<"\nPrinting minimum value : "<<minVal(root) -> data<<endl;

    cout<<"\nPrinting maximum value : "<<maxVal(root) -> data<<endl;
    //Deletion call
    root = deleteFromBST(root , 10);

    cout<<"\nPrinting the BST : "<<endl;
    levelOrderTraversal(root);

    cout<<"\nPrinting inOrder Trversal : "<<endl;
    inOrder(root);

    cout<<"\nPrinting preOrder Trversal : "<<endl;
    preOrder(root);

    cout<<"\nPrinting postOrder Trversal : "<<endl;
    postOrder(root);

    cout<<"\nPrinting minimum value : "<<minVal(root) -> data<<endl;

    cout<<"\nPrinting maximum value : "<<maxVal(root) -> data<<endl;


    return 0;
}