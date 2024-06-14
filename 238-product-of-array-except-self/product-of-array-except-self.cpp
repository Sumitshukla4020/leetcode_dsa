class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long product=1;
        long productwz=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            product *= nums[i];
            if(nums[i]==0){
                count++;
            }
            if(nums[i]!=0){
                productwz *= nums[i];
            }
        }
        if(count<2){
        for(int i=0;i<nums.size();i++){
            if(product==0 && nums[i]!=0){
                nums[i]=0;
            }
            else if(product==0 && nums[i]==0){
                nums[i]= productwz;
            }
            else{
                nums[i] = product/nums[i];
            }
        }
        }
        else{
            for(int i=0;i<nums.size();i++){
                nums[i]=0;
            }
        }
        return nums;
    }
};