// Complete the reverseLinkedList function below.
/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *reverseLinkedList(SinglyLinkedListNode *head)
{
  //single node case
  if(head->next==NULL){
    return head;
  }

SinglyLinkedListNode* slow = head;
SinglyLinkedListNode* z = NULL;

while(slow!=NULL){
  SinglyLinkedListNode* temp = slow->next;
  slow->next = z;
  z=slow;
  slow=temp;
}

return z;


}
