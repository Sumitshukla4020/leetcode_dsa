class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int n=nums.size();
        int k;
        for(auto a : m){
            if(a.second>n/2){
                k= a.first;
            }
        }
        return k;
        
    }
};