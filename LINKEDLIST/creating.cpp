#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    //constructor for node
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data : "<<value<<endl;
    }
};

void insertAtHead(Node* &head,int data){
    //create a new node
    Node *temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int data){
    //create a new node
    Node *temp = new Node(data);

    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head,Node* &tail,int position,int data){

    if(position==1){
        insertAtHead(head,data);
        return ;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    //inserting at last postition
    if(temp -> next == NULL){
        insertAtTail(tail,data);
        return ; 
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;


}

void deleteNode(int position,Node* &head){

    if(position==1){
        //deleting the first node
        Node* temp = head;
        head = head -> next;

        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting the middle or last node
        Node* prev = NULL;
        Node* curr = head;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++; 
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }

}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{   
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    insertAtHead(head,9);
    print(head);

    insertAtTail(tail,11);
    print(head);

    insertAtPosition(head,tail,1,15);
    print(head);

    deleteNode(4,head);
    print(head);

    return 0;
}