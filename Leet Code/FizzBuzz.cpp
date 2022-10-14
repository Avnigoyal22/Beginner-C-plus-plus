// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> arr;
        
        for(int i=0;i<n;i++){
            if((i+1)%3==0 && (i+1)%5==0){
                arr.push_back("FizzBuzz");
            }
            else if((i+1)%3==0){
                arr.push_back("Fizz");
            }
            else if((i+1)%5==0){
                arr.push_back("Buzz");
            }
            else{
                arr.push_back(to_string(i+1));
            }
        }
        
        return arr;
    }
};

int main(){
    Solution s;

    int n;
    cin>>n;

    vector<string> v = s.fizzBuzz(n);

    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}