class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> sol;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==1){
                count++;
            }
            else{
                sol.push_back(count);
                count=0;
                continue;
            }
            if(i==nums.size()-1){
                sol.push_back(count);
            }
        }
        int m=0;
        for(int i=0;i<sol.size();i++){
            m = max(m,sol[i]);
        }
        return m;
    }
};