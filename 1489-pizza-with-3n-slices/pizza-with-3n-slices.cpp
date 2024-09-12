class Solution {
public:
    int solve(int index, int end, vector<int>& slices, int n, vector<vector<int>> &dp){
        if(n==0 || index>end){
            return 0;
        }

        if(dp[index][n]!=-1){
            return dp[index][n];
        }

        int accept = slices[index] + solve(index+2, end, slices, n-1, dp);
        int reject = solve(index+1, end, slices, n, dp);
        return dp[index][n]=max(accept,reject);
    }
    int maxSizeSlices(vector<int>& slices) {
        
        int k = slices.size();
        vector<vector<int>> dp1(k, vector<int> (k,-1));
        vector<vector<int>> dp2(k, vector<int> (k,-1));
        int a = solve(0, k-2, slices, k/3, dp1);
        int b = solve(1, k-1, slices, k/3, dp2);
        return max(a,b);
    }
};