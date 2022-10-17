// Complete the removeDuplicates function below.

/*
* For your reference:
*
* SinglyLinkedListNode {
*     int data;
*     SinglyLinkedListNode* next;
* };

To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*
*/
SinglyLinkedListNode *removeDuplicates(SinglyLinkedListNode *head)
{
SinglyLinkedListNode* front = head;
SinglyLinkedListNode* back = head;

front=front->next;

// single node case
if(back->next==NULL){
  return head;
}
//double node case
else if(back->next!=NULL && front->next==NULL){
  if(back->data==front->data){
    back->next=NULL;
  }
  return head;
}
// rest case
else {
  while(front->next!=NULL){
  if(back->data==front->data){
    back->next=front->next;
    front=front->next;
  }
  else{
    front=front->next;
    back=back->next;
  }
  
  }
}

// if last two nodes are duplicate case
if(back->data==front->data){
  back->next=front->next;
}

return head;

}

