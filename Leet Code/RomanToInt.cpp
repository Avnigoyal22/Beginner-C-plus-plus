#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        
        switch(s[s.length()-1]){
            case 'I': 
                sum+=1;
                break;
            case 'V': 
                sum+=5;
                break;
            case 'X': 
                sum+=10;
                break;
            case 'L': 
                sum+=50;
                break;
            case 'C': 
                sum+=100;
                break;
            case 'D': 
                sum+=500;
                break;
            case 'M': 
                sum+=1000;
                break;
        }
        
        for(int i=s.length()-1;i>0;i--){
            if(s[i-1]=='I' && (s[i]=='V'||s[i]=='X')){
                sum-=1;
            }
            else if(s[i-1]=='X' && (s[i]=='L'||s[i]=='C')){
                sum-=10;
            }
            else if(s[i-1]=='C' && (s[i]=='D'||s[i]=='M')){
                sum-=100;
            }
            else{
                switch(s[i-1]){
            case 'I': 
                sum+=1;
                break;
            case 'V': 
                sum+=5;
                break;
            case 'X': 
                sum+=10;
                break;
            case 'L': 
                sum+=50;
                break;
            case 'C': 
                sum+=100;
                break;
            case 'D': 
                sum+=500;
                break;
            case 'M': 
                sum+=1000;
                break;
        }
        
            }
        }
        return sum;
    }
};

int main(){

    Solution s;
    string str;
    cin>>str;

    cout<<s.romanToInt(str);

    return 0;
}