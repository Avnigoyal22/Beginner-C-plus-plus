// Complete the insertSortedNode function below.
/*
For your reference:
SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *insertSortedNode(SinglyLinkedListNode *head,int value)
{
SinglyLinkedListNode* slow = head;
SinglyLinkedListNode* fast = head;
SinglyLinkedListNode* temp = new SinglyLinkedListNode(value);

if(head->data>=value){
  temp->next = head;
  return temp;
}

int i=0;
while(fast!=NULL){
  if(fast->data>=value){
    slow->next=temp;
    temp->next=fast;
    return head;
  }
  fast=fast->next;
  if(i!=0){
    slow=slow->next;
  }
  i++;
}

if(fast==NULL){
  slow->next = temp;
}

return head;

}

