class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        
        vector<int> ans;
        
        for(int i=0;i<m;i++){
            mat[i].push_back(i);
        }
        
        sort(mat.begin(),mat.end());
        
        for(int i=0;i<k;i++){
            ans.push_back(mat[i][n]);
        }
        
        return ans;
    }
};