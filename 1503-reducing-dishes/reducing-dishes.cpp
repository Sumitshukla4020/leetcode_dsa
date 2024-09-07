class Solution {
public:
    int solve(vector<int>& satisfaction, int index, int time, vector<vector<int>> &dp){
        if(index == satisfaction.size()){
            return 0;
        }
        if(dp[index][time]!=-1){
            return dp[index][time];
        }
        int inc = satisfaction[index]*(time) + solve(satisfaction, index+1, time+1, dp);
        int exc = solve(satisfaction, index+1, time, dp);
        dp[index][time] = max(inc,exc);
        return dp[index][time] ;

    }
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int n = satisfaction.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return solve(satisfaction, 0, 1, dp);
    }
};