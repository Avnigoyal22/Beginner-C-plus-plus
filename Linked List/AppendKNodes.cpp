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

int length(node* head){
    node* temp = head;
    int l=0;
    while(temp->next!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* appendK(node* &head, int k){
    node* newHead;
    node* newTail;
    node* tail=head;

    int l = length(head);
    k=k%l;
    int cnt=0;
    while(tail->next!=NULL){
        if(cnt==l-k){
            newTail=tail;
        }
        if(cnt==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        cnt++;
    }

    newTail->next=NULL;
    tail->next=head;

    return newHead;
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

    insert_end(head, 10);
    insert_end(head, 20);
    insert_end(head, 30);
    insert_end(head, 40);
    insert_end(head, 50);
    insert_end(head, 60);
    display(head);

    cout<<endl;
    node* newHead = appendK(head, 3);
    display(newHead);

    return 0;
}