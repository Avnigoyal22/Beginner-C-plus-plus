#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    stack<int> s1;
    stack<int> s2;
    stack<int> s3;
    
    int n,a;
    cin>>n;
    
    for(int i=0;i<n;i++){
      cin>>a;
      s1.push(a);
      s2.push(a);
    }
    
    while(!s2.empty()){
      s3.push(s2.top());
      s2.pop();
    }
    
    // stack s1 represents Y and s3 represents X
    while(!s1.empty() && !s3.empty()){
      if(s1.top()>s3.top()){
        cout<<"2 ";
        s3.pop();
      }
      else if(s1.top()<s3.top()){
        cout<<"1 ";
        s1.pop();
      }
      else{
        cout<<"0 ";
        s1.pop();
        s3.pop();
      }
    }
    
    return 0;
  }
