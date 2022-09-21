#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev-NULL;
    }
};

void insert_begin(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}

void insert_end(node* &head, int val){

    if(head==NULL){
        insert_begin(head, val);
        return;
    }

    node* n = new node(val);
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next = n;
    n->prev=temp;
}

void display(node* &head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head = NULL;
    insert_end(head, 10);
    insert_end(head, 20);
    insert_end(head, 30);
    insert_end(head, 40);
    insert_begin(head, 50);
    display(head);

    return 0;
}