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

void delete_head(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
}

void deletion(node* &head, int pos){

    if(pos==1){
        delete_head(head);
        return;
    }
    node* temp=head;

    int cnt=1;
    while(temp!=NULL && cnt!=pos){
        temp=temp->next;
        cnt++;
    }

    temp->prev->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }

    delete temp;

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
    insert_begin(head, 70);
    insert_begin(head, 60);
    insert_begin(head, 50);
    insert_begin(head, 40);
    insert_begin(head, 30);
    insert_begin(head, 20);
    insert_begin(head, 10);
    deletion(head, 1);
    display(head);

    return 0;
}