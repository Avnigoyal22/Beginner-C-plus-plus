#include <bits/stdc++.h>
using namespace std;

//Approach 1 - O(n^2) time Compexity

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(int i=0;i<magazine.length();i++){
            for(int j=0;j<ransomNote.length();j++){
                if(magazine[i]==ransomNote[j]){
                    ransomNote[j]='!';
                    break;
                }
            }
        }
        
        for(int i=0;i<ransomNote.length();i++){
            if(ransomNote[i]!='!'){
                return false;
            }
        }
        return true;
    }
};

//Approach 2 - O(n) time Compexity

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26];
        for(int i=0;i<26;i++){
            arr[i]=0;
        }
        
        for(int i=0;i<ransomNote.length();i++){
            arr[ransomNote[i]-97]++;
        }
        
        for(int i=0;i<magazine.length();i++){
            if(arr[magazine[i]-97]!=0){
                arr[magazine[i]-97]--;
            }
        }
        
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
        
        
    }
};

int main(){
    string ransomNote, magazine;
    cin>>ransomNote>>magazine;

    Solution s;
    cout<<s.canConstruct(ransomNote,magazine);

    return 0;
}
