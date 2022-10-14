#include <bits/stdc++.h>
using namespace std;

  // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
 
 void insert_end(ListNode* &head, int val){
    ListNode* n = new ListNode(val);

    if(head == NULL){
        head = n;
        return;
    }

    ListNode* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
}

class Solution {
public:
    ListNode* middleNode(ListNode* head) {    
        if(head->next==NULL){
            return head;
        }
        
        ListNode* slow =head;
        ListNode* fast = head;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        if(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
        }
        
        return slow;
    }
};

int main(){
    Solution s;

    ListNode* head;
    insert_end(head, 1);
    insert_end(head, 2);
    insert_end(head, 3);
    insert_end(head, 6);
    insert_end(head, 4);
    insert_end(head, 5);

    cout<<s.middleNode(head)->val;
}