class Solution {
public:
    int solve(vector<int> &nums, int curr, int prev, int n, vector<vector<int>> &dp){
        if(curr == n){
            return 0;
        }
        if(dp[curr][prev+1]!=-1){
            return dp[curr][prev+1];
        }
        int add = 0;
        if(prev == -1 || nums[prev]<nums[curr]){
            add = 1 + solve(nums, curr+1, curr, n, dp);
        }
        int remove = solve(nums, curr+1, prev, n, dp);
        dp[curr][prev+1] = max(add,remove);
        return dp[curr][prev+1] ;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return solve(nums, 0, -1, n, dp);
    }
};