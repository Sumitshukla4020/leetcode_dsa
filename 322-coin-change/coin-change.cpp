class Solution {
public:
    int solve(vector<int>& coins, int x, vector<int> &arr){
        if(x==0){
            return 0;
        }
        if(x<0){
            return INT_MAX;
        }
        if(arr[x]!=-1){
            return arr[x];
        }
        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans = solve(coins, x-coins[i], arr);
            if(ans!=INT_MAX){
                mini = min(mini, ans+1);
            }
        }
        arr[x]=mini;
        return arr[x];
    } 
    int coinChange(vector<int>& coins, int amount) {
        vector<int> arr(amount+1, -1);
        int ans = solve(coins, amount, arr);
        if(ans==INT_MAX){
            return -1;
        }
        else{
            return ans;
        }
    }
};