#include<iostream>
using namespace std;

class TrieNode
{
    public:

    char data;
    TrieNode* children[26];
    bool isTerminal;

    //constructor

    TrieNode(char ch)
    {
        data=ch;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class Trie
{
    public:
    TrieNode* root;

    Trie()
    {
        root=new TrieNode('\0');
    }

    void insertutil(TrieNode* root,string word)
    {
        if(word.length()==0)
        {
            root->isTerminal=true;
            return;
        }

        // assumptions, word ill be in caps
        int index=word[0]-'A';
        TrieNode* child;

        //present
        if(root->children[index]!=NULL)
        {
            child=root->children[index];
        }
        else
        {
            //absent
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }

        //recursion
        insertutil(child,word.substr(1));
    }


    void insertword(string word)
    {
        insertutil(root,word);
    }




    bool searchutil(TrieNode* root,string word)
    {
        if(word.length()==0)
        {
            return root->isTerminal;
        }

        int index=word[0]-'A';
        TrieNode* child;

        if(root->children[index]!=NULL)
        {
            child=root->children[index];
        }
        else
        {
            return false;
        }

        return searchutil(child,word.substr(1));
    }

    bool search(string word)
    {
        return searchutil(root,word);
    }


};

int main()
{
    Trie *t=new Trie();
    t->insertword("ABCD");
    t->insertword("LOVE");
    t->insertword("RISHI");
    t->insertword("SHUBHI");
    t->insertword("LOVY");
    t->insertword("HATE");
    cout<<"present or not "<< t->search("ABCD") <<endl;
    cout<<"present or not "<< t->search("RISHU") <<endl;
    cout<<"present or not "<< t->search("NANDU") <<endl;
    cout<<"present or not "<< t->search("LOVE") <<endl;

}