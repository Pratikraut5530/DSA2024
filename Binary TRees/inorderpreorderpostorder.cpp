#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *left;
        node *right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node * buildTree(node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void inorder(node * root){
    if(root==NULL){
        return ;
    
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node *root = NULL;

    root = buildTree(root);

    cout<<"Printing the inorder Traversal output: "<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Printing the Preoder Traversal output: "<<endl;
    preorder(root);
    cout<<endl;

    cout<<"Printing the postorder Traversal output: "<<endl;
    postorder(root);
    cout<<endl;
    
    return 0;
}