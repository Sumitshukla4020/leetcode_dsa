class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cur=prices[0];
        int maxsum=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]-cur>0){
                maxsum = max(maxsum,prices[i]-cur);
            }
            else{
                cur=prices[i];
            }
        }
        return maxsum;
    }
};