// Approach 1
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr;
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            arr.push_back(sum);
        }
        
        return arr;
    }
};

// Approach 2
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        
        return nums;
    }
};
