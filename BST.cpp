#include<iostream>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d)  //constructor
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
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

Node* insertIntoBST(Node* root,int d)
{
    if(root==NULL)
    {
        root=new Node(d);
        return root;
    }

    if(d>root->data)
    {
        root->right=insertIntoBST(root->right,d);
    }
    else
    {
        root->left=insertIntoBST(root->left,d);
    }
    return root;
}

//min value
Node* minVal(Node* root)
{
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

//max val
Node* maxVal(Node* root)
{
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}


Node* deleteFromBST(Node* root,int val)
{
    if(root==NULL){
        return root;
    }

    if(root->data==val){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        //1 child

        //left child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }

        //right child
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }

        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;
        }


    }

    else if(root->data>val){
        root->left=deleteFromBST(root->left,val);
        return root;
    }

    else{
        root->right=deleteFromBST(root->right,val);
        return root;
    }
}



void takeInput(Node* &root)
{
    int data;
    cin>>data;

    while(data != -1)
    {
        root=insertIntoBST(root,data);
        cin>>data;
    }
}

int main()
{
    //creating a node
    Node* root=NULL;

    cout<<"Enter data to create BST " << endl;
    takeInput(root);

    cout<<"PRintting the BST " <<endl;
    levelOrderTraversal(root);

    cout<<"min value "<<minVal(root)->data<<endl;

    cout<<"max value "<<maxVal(root)->data<<endl;



    root=deleteFromBST(root,8);
    




    cout<<"PRintting the BST " <<endl;
    levelOrderTraversal(root);

    cout<<"min value "<<minVal(root)->data<<endl;

    cout<<"max value "<<maxVal(root)->data<<endl;

}


//    10 8 21 7 27 5 4 3 9 26 -1