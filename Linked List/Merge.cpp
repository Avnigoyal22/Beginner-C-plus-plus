//Iterative Method

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

node* merge(node* &head1, node* &head2){
    node* ptr1=head1;
    node* ptr2=head2;
    node* dummyNode = new node(-1);
    node* ptr3=dummyNode;

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data<ptr2->data){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }

    while(ptr1!=NULL){
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }

    while(ptr2!=NULL){
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }

    return dummyNode;
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

    node* newHead = merge(head, head2);
    newHead=newHead->next;
    display(newHead);

    return 0;
}