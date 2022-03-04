#include<bits/stdc++.h>
#include<inttypes.h>

using namespace std;

class Node{
    public:
        int data;
        Node* npx;

};

Node* XOR(Node* a, Node* b){
    return (Node*)((uintptr_t)(a)^(uintptr_t)(b));
}


void insert(Node** head, int data){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->npx = XOR(*head,NULL);
    if(*head!=NULL){
        Node* next = XOR((*head)->npx,NULL);
        (*head)->npx = XOR(new_node,next);
    }

    *head = new_node;
}

void printList(Node* head){
    Node *curr = head;
    Node *next = NULL;
    Node *prev = NULL;

    while(curr!=NULL){
        cout<<curr->data<<" ";
        next = XOR(prev,curr->npx);
        prev = curr;
        curr = next;
    }
}


int main(){
    Node* head = NULL;
    insert(&head,1);
    insert(&head,4);
    insert(&head,23);
    insert(&head,56);
    insert(&head,12);

    printList(head);

    return 0;
}