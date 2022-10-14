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

int main(){
    string ransomNote, magazine;
    cin>>ransomNote>>magazine;

    Solution s;
    cout<<s.canConstruct(ransomNote,magazine);

    return 0;
}
