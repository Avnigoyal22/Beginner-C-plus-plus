//Recursive Method

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insert_end(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
}

node* mergeRec(node* &head1, node* &head2){

    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }

    node* result;

    if(head1->data<head2->data){
        result=head1;
        result->next=mergeRec(head1->next,head2);
    }
    else{
        result=head2;
        result->next=mergeRec(head1,head2->next);
    }

    return result;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head = NULL;
    node* head2 = NULL;
    insert_end(head, 0);
    insert_end(head, 30);
    insert_end(head, 50);
    insert_end(head, 70);
    insert_end(head2, 10);
    insert_end(head2, 20);
    insert_end(head2, 40);
    display(head);
    cout<<endl;
    display(head2);
    cout<<endl;

    node* newHead = mergeRec(head, head2);
    display(newHead);

    return 0;
}