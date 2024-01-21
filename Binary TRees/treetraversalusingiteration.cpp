#include<iostream>
#include<vector>
#include<stack>
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

vector<int> inordertraversal(node* root){
    stack<node*> st;
    node* temp = root;
    vector<int> inorder;

    while(true){
        if(temp != NULL){
            st.push(temp);
            temp = temp->left;
        }
        else{
            if(st.empty()){
                break;
            }
            temp = st.top();
            st.pop();
            inorder.push_back(temp->data);
            temp = temp->right;
        }
    }
    return inorder;
}

void display(vector<int> &ans){
    int n = ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    node* root = NULL;
    
    root = buildTree(root);

    vector<int> ans;
    ans = inordertraversal(root);

    display(ans);

    return 0;
}