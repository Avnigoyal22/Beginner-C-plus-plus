#include <iostream>
using namespace std;

 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
// function to insert elements in the linked list
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

// check palindrome
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(slow!=NULL && slow->next!=NULL){
            fast=fast->next;
            slow=slow->next->next;
        }
        
        ListNode* z = NULL;
        while(fast!=NULL){
            ListNode* temp = fast->next;
            fast->next = z;
            z=fast;
            fast = temp;
        }

        while(z){
            
            if(z->val!=head->val){
                return false;
            }
            z=z->next;
            head=head->next;
        }
        return true;
    }
};

int main(){
    ListNode* head;
    insert_end(head, 10);
    insert_end(head, 20);
    insert_end(head, 30);
    insert_end(head, 40);
    insert_end(head, 20);
    insert_end(head, 10);

    Solution s;
    
    // return true/1 if palindrome
    cout<<s.isPalindrome(head);
}
