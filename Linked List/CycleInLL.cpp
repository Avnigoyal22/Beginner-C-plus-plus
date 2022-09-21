#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insert_end(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;  
}

void makeCycle(node* &head, int pos){
    node* temp = head;
    node* startNode;

    int cnt=1;
    while(temp->next!=NULL){
        if(cnt==pos){
            startNode = temp;
        }
        temp=temp->next;
        cnt++;
    }
    temp->next = startNode;
}

bool detectCycle(node* &head){
    node* fast = head;
    node* slow = head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }

    return false;
}

void removeCycle(node* head){
    node* fast=head;
    node* slow=head;

    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            break;
        }
    }

    fast=head;
    while(fast->next!=slow->next){
        fast=fast->next;
        slow=slow->next;
    }

    slow->next = NULL;
}

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head=NULL;
    insert_end(head, 10);
    insert_end(head, 20);
    insert_end(head, 30);
    insert_end(head, 40);
    insert_end(head, 50);
    makeCycle(head, 3);
    // display(head);
    cout<<detectCycle(head);
    cout<<endl;
    removeCycle(head);
    display(head);
    cout<<endl<<detectCycle(head);
    return 0;
}

// 0 - false, 1 - true