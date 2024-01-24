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

//approach 1
//tc = O(n^2)
int height(node* root){
    //base case
    if(root==NULL){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left,right) +1;
    return ans;
}

int diameter(node* root){
    //base case
    if(root==NULL){
        return 0;
    }

    int option1 = diameter(root->left);
    int option2 = diameter(root->right);
    int option3 = height(root->left) + height(root->right)+1;

    int ans = max(option1,max(option2,option3));
    return ans;

}

//approach 2
//tc O(n)
pair<int,int> diameterFast(node* root){
    //base case
    if(root == NULL){
        pair<int,int> p=make_pair(0,0);
        return p;
    }

    pair<int,int> left = diameterFast(root->left);
    pair<int,int> right = diameterFast(root->right);

    int option1 = left.first;
    int option2 = right.first;
    int option3 = left.second + right.second + 1;

    pair<int,int> ans;
    ans.first = max(option1,max(option2,option3));
    ans.second = max(left.second,right.second) + 1;

    return ans;
}

int diameter(node* root){
    return diameterFast(root).first;
}



int main()
{
    node *root = NULL;
    buildTree(root);
    return 0;
}