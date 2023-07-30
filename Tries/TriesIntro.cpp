//Implementation of Tries
#include<bits/stdc++.h>

using namespace std;

//Tries creation
class triesNode{
    public:
        char data;
        triesNode* children[26];
        bool isTerminal;

    triesNode(char ch)
    {
        ch = data;
        for(int i = 0; i<26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }    

};

//Tries Insertion
class trie{
    public:
        triesNode* root;

        trie()
        {
            root = new triesNode('\0');
        }
//Insertion
    void insertUtil(triesNode* root, string word)
    {
        if(word.length() == 0)
        {
            root -> isTerminal = true;
            return;
        }
    //Words in upper case or lower case as per need
        int index = word[0] - 'a';
        triesNode* child;

        if(root -> children[index] != NULL)
        {
            child = root -> children[index];
        }
        else
        {
            child = new triesNode(word[0]);
            root -> children[index] = child;
        }

        insertUtil(child, word.substr(1));

    }
    
    void insertword(string word)
    {
        insertUtil(root, word);
    }  
//Searching
    bool searchUtil(triesNode* root, string word)
    {
        if(word.length() == 0)
        {
            return root -> isTerminal;
        }

        int index = word[0] - 'a';
        triesNode* child;

        if(root -> children[index] != NULL)
        {
            child = root -> children[index];
        }
        else
        {
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool search(string word)
    {
        return searchUtil(root, word);
    } 

    bool trieEmpty(triesNode *root){
    for(int i = 0 ; i < 26 ; i++)
    {
        if(root->children[i])
        {
            return false;
        }
    }    
        return true;
    } 
//Deletion
    triesNode* remove(triesNode* root, string word, int depth = 0)
    {
        if (!root)
            return NULL;
        if (depth == word.size()) 
        {
    
            if (root->isTerminal)
                root->isTerminal = false;

            if (trieEmpty(root))
            {
                delete (root);
                root = NULL;
            }
    
            return root;
        }
        int index = word[depth] - 'a';
        root->children[index] =
            remove(root->children[index], word, depth + 1);
    
        if (trieEmpty(root) && root->isTerminal == false) 
        {
            delete (root);
            root = NULL;
        }
    
        return root;
    }

        void deleteTrie(string word)
        {
            remove(root, word);
        }

};

int main()
{
    trie *t = new trie();
    t->insertword("arm");
    t->insertword("do");
    t->insertword("time");
    t->insertword("abcd");

    cout<<"Present or not : "<<t->search("arm")<<endl;

    t->deleteTrie("arm");

    cout<<"Present or not : "<<t->search("arm")<<endl;

    return 0;
}