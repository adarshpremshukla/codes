#include<iostream>
using namespace std;
#include<queue>

class node
{
    public:
        int data;
        node* left;
        node* right;

    //constructor
    node(int d)
    {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root)
{
    cout << " Enter the data for the root " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout << " Enter the data for the inserting in left " << data << endl;
    root -> left = buildTree(root -> left);
    cout << " Enter the data for the inserting in right " << data << endl;
    root -> right = buildTree(root -> right);
    return root;

}

void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) //purana level complete traversal ho chuka hai
        {
            cout << endl;
            if(!q.empty()) // queue still has some child nodes
            {
                q.push(NULL);
            }
        }
        
        else
        {
            cout << temp -> data << " ";
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


void inorder(node* root)
{
    //base case
    if(root == NULL)
        return;

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}


void preorder(node* root)
{
    //base case
    if(root == NULL)
        return;

    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}


void postorder(node* root)
{
    //base case
    if(root == NULL)
        return;

    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
}

int main()
{
    node* root = NULL;

    //creating a tree
    root = buildTree(root);

    //level order
    levelOrderTraversal(root);

    cout <<" inorder traversal is :" << endl;
    inorder(root);

    cout << endl;

    cout <<" preorder traversal is :" << endl;
    preorder(root);

    cout << endl;
    
    cout <<" postorder traversal is :" << endl;
    postorder(root);
}


//1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1