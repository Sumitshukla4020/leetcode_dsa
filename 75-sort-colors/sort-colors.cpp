class Solution {
public:
    void sortColors(vector<int>& nums) {
        // for(int s=0;s<nums.size()-1;s++){
        //     int i=s;
        //     int j=s+1;
        //     while(j<nums.size()){
        //         if(nums[i]>nums[j]){
        //             swap(nums[i],nums[j]);
        //         }
              
        //         j++;
        //     }
        // }
        sort(nums.begin(),nums.end());
    }
};