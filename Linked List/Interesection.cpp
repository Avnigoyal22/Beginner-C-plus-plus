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

int length(node* &head){
    int l=1;
    node* temp = head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}


int interes(node* head1, node* head2){
    int l1 = length(head1);
    int l2 = length(head2);

    node* ptr1 = head1;
    node* ptr2 = head2;

    int k;
    if(l1>l2){
        k=l1-l2;
    }
    else{
        k=l2-l1;
    }

    while(k--){
        if(l1>l2){
            ptr1=ptr1->next;
        }
        else{
            ptr2=ptr2->next;
        }
    }
    
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    return -1;

}
void intersect(node* head, node* head2, int pos){
    node* temp1 = head;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }

    node* temp2 = head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }

    temp2->next = temp1;
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
    node* head2=NULL;
    insert_end(head, 0);
    insert_end(head, 10);
    insert_end(head, 20);
    insert_end(head, 30);
    insert_end(head, 40);
    insert_end(head, 50);
    insert_end(head2, 60);
    insert_end(head2, 70);
    insert_end(head2, 80);
    intersect(head, head2 , 3);
    display(head);
    cout<<endl;
    display(head2);
    cout<<endl;
    cout<<interes(head,head2);

    return 0;
}