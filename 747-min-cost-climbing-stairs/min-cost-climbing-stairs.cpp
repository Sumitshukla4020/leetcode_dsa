class Solution {
public:
    // int solve(int n, vector<int> &dp, vector<int>& cost){
    //     if(n==0){
    //         return cost[0];
    //     }
    //     if(n==1){
    //         return cost[1];
    //     }
    //     if(dp[n]!=-1){
    //         return dp[n];
    //     }
    //     dp[n] = min(solve(n-1,dp,cost),solve(n-2,dp,cost)) + cost[n];
    //     return dp[n];
    // }

    int minCostClimbingStairs(vector<int>& cost) {
        // int n = cost.size();
        // vector<int> dp(n+1,-1);
        // int ans = min(solve(n-1,dp,cost),solve(n-2,dp,cost));
        // return ans;
        int n = cost.size();
        vector<int> dp(n+1,-1);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i=2;i<n;i++){
            dp[i] = min(dp[i-1],dp[i-2]) + cost[i];
        }
        dp[n] = min(dp[n-1],dp[n-2]);
        return dp[n];
    }
};