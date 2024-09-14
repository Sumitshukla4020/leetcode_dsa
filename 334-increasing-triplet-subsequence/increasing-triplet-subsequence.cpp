class Solution {
public:
    // int solve(vector<int>& nums, int n, int curr, int prev, vector< vector <int>> &dp){
    //     if(curr == n){
    //         return 0;
    //     }
    //     if(dp[curr][prev+1]!=-1){
    //         return dp[curr][prev+1];
    //     }
    //     int add = 0;
    //     if(prev == -1 || nums[prev]<nums[curr]){
    //         add = 1 + solve(nums, n, curr+1, curr, dp);
    //     }
    //     int remove = solve(nums, n, curr+1, prev, dp);
    //     dp[curr][prev+1] = max(add,remove);
    //     return dp[curr][prev+1];
    // }
        
        // int n = nums.size();
        // vector< vector <int>> dp(n, vector<int>(n+1, -1));
        // int k = solve(nums, n, 0, -1, dp);
        // if(k>=3){
        //     return true;
        // }
        // return false;

public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;
        
        for (int num : nums) {
            if (num <= first) {
                first = num;
            } else if (num <= second) {
                second = num;
            } else {
                
                return true;
            }
        }
        
        return false;
    }
};


        