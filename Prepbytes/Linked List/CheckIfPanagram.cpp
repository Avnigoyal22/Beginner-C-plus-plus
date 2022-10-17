// A pangram is a sentence where every letter of the English alphabet appears at least once.

//Approach 1
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26];
        
        for(int i=0;i<26;i++){
            arr[i]=0;
        }
        
        for(int i=0;i<sentence.length();i++){
            arr[sentence[i]-97]++;
        }
        
        for(int i=0;i<26;i++){
            if(arr[i]<1){
                return false;
            }
        }
        
        return true;
    }
};

//Approach 2
class Solution {
public:
    bool checkIfPangram(string sentence) {        
        return set<char>(sentence.begin(),sentence.end()).size() == 26;
    }
};
