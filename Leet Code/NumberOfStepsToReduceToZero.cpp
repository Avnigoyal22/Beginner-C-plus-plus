// Basic Math (Runtime almost 11% faster than others)
class Solution {
public:
    int numberOfSteps(int num) {
        
        int cnt=0;
        
        while(num!=0){
            if(num%2==0){
                num=num/2;
            }
            else{
                num=num-1;
            }
            cnt++;
        }
        
        return cnt;
    }
};

// Bit Manipulation (Runtime 100% faster than others)
class Solution {
public:
    int numberOfSteps(int num) {

        if(num==0){
            return 0;
        }
        
        int cnt=0;
        
        string s = bitset<32>(num).to_string();
        
        int i=0;
        while(s[i]=='0'){
            i++;
        }
        
        for(int j=i;j<s.length();j++){
            if(s[j]=='1'){
                cnt+=2;
            }
            else{
                cnt+=1;
            }
        }
        
        return cnt-1;
    }
};
