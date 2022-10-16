// Complete the printMidElement function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

void printMidElement(SinglyLinkedListNode *head)
{
  if(head->next==NULL){
    cout<<head->data<<endl;
    return;
  }
  
  SinglyLinkedListNode* slow = head;
  SinglyLinkedListNode* fast = head;
  
  while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
  }
  
  cout<<slow->data<<endl;

}

