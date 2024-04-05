#include<iostream>
using namespace std;

int getMiddle(Node* head){
    //rabbit tortoise method
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow->data;
}

int main()
{
    return 0;
}