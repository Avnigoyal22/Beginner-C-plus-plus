// Complete the palindromeLlist function below.
/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/
bool palindromeLlist(SinglyLinkedListNode *head)
{
if(head->next==NULL){
  return true;
}

SinglyLinkedListNode* fast = head;
SinglyLinkedListNode* slow = head;
SinglyLinkedListNode* z = NULL;

while(fast!=NULL && fast->next!=NULL){
  slow=slow->next;
  fast=fast->next->next;
}

while(slow!=NULL){
  SinglyLinkedListNode* temp = slow->next;
  slow->next = z;
  z=slow;
  slow=temp;
}

while(z!=NULL){
  if(z->data!=head->data){
    return false;
  }
  head=head->next;
  z=z->next;
}

return true;

}
