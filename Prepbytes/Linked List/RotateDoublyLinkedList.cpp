// Complete the rotateDoublyList function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
SinglyLinkedListNode* prev;
};
To create a new node use the below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *rotateDoublyList(SinglyLinkedListNode *head,int k)
{
if(head->next == NULL){
  return head;
}

SinglyLinkedListNode* temp = head;
SinglyLinkedListNode* last = head;

while(last->next!=NULL){
  last=last->next;
}

while(k--){
  SinglyLinkedListNode* temp2 = temp->next;
  temp->prev=last;
  head=temp2;
  temp->next = NULL;
  last->next = temp;
  last=temp;
  temp=temp2;
  temp->prev=NULL;
}

return head;

}
