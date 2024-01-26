#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this-> data = data;
        this->left = NULL;
        this->right = NULL;
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

int height(node* root){
    //base case
    if(root==NULL){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left,right) + 1;
    return ans;
}

//approach 1 brute force
bool isBalanced(node* root){
    //base case
    if(root==NULL){
        return true;
    }

    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);

    bool diff = abs(height(root->left)-height(root->right)) <=1;

    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }
}

//approach 2 optimal
pair<bool,int> isBalancedFast(node* root){
    if(root==NULL){
        pair<bool,int> p = make_pair(true,0);
        return p;
    }

    pair<bool,int> left = isBalancedFast(root->left);
    pair<bool,int> right = isBalancedFast(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    bool diff = abs(left.second - right.second) <=1;

    pair<bool,int> ans;
    ans.second = max(left.second,right.second) +1;
    
    if(leftAns && rightAns && diff){
        ans.first = true;
    }
    else{
        ans.first = false;
    }

    return ans;

}

int main()
{
    node* root = NULL;
    
    bool ans = isBalancedFast(root).first;
    return 0;
}
