class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m,n;
        m = accounts.size();
        n = accounts[0].size();
        vector<int> sum;
        int wel;
        
        for(int i=0;i<m;i++){
            wel=0;
            for(int j=0;j<n;j++){
                wel+=accounts[i][j];
            }
            sum.push_back(wel);
        }
        
        int max=sum[0];
        for(int i=0;i<m;i++){
            if(sum[i]>max){
                max=sum[i];
            }
        }
        
        return max;
    }
};