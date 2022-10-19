#include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    int t;
    cin>>t;
    
    while(t--){
      stack<int> s1;
      int n,a;
      cin>>n;
      
      for(int i=0;i<n;i++){
        cin>>a;
        s1.push(a);
      }
      
      for(int i=0;i<n;i++){
        cout<<s1.top()<<" ";
        s1.pop();
      }
      cout<<endl;
    }
    
    return 0;
  }
