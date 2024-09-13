class Solution {
public:
    bool solve(vector<int>& nums, int target, int s, int index, vector<vector<int>> &dp){
        if(target==0){
            return 1;
        }
        if(target<0){
            return 0;
        }
        if(index>=s){
            return 0;
        }
        if(dp[index][target]!=-1){
            return dp[index][target];
        }
        bool take = solve(nums, target-nums[index], s, index+1, dp);
        bool nottake = solve(nums, target, s, index+1, dp);
        return dp[index][target]=take or nottake;
    }
    bool canPartition(vector<int>& nums) {
        int s = nums.size();
        int sum = 0;
        for(int i=0;i<s;i++){
            sum += nums[i];
        }
        if(sum%2!=0){
            return 0;
        }
        int target = sum/2;
        vector<vector<int>> dp(s, vector<int>(target+1, -1));
        return solve(nums, target, s, 0, dp);
    }
};