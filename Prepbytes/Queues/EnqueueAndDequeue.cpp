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
  
  class queue{
    node* front;
    node* back;
    
    public:
    queue(){
      front=NULL;
      back=NULL;
    }
    
    void enqueue(int x){
      node* n = new node(x);
      
      if(front==NULL){
        front=n;
        back=n;
        return;
      }
      
      back->next=n;
      back=n;
    }
    
    void dequeue(){
      node* todelete=front;
      
      if(front==NULL){
        return;
      }
      
      front=front->next;
      delete todelete;
      
    }
    
    void display(){
      node* temp = front;
      if(front==NULL){
        return;
      }
      
      while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
      }
    }
  };
  
  int main()
  {
    queue q;
    
    int n,a;
    cin>>n;
    
    for(int i=0;i<n;i++){
      cin>>a;
      q.enqueue(a);
      q.display();
      cout<<endl;
    }
    
    for(int i=0;i<n;i++){
      q.dequeue();
      q.display();
      cout<<endl;
    }
    
    return 0;
  }
