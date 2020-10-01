class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int global_max = INT_MIN;
        int local_max = 0;
        for(int i = 0; i< nums.size();i++){
            local_max = max(local_max+nums[i],nums[i]);
            global_max = max(global_max,local_max);
        }
        return global_max;
    }
};
