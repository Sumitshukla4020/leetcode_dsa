class Solution {
public:
    int first(vector<int>& nums, int target){
        int s =0;
        int e =nums.size()-1;
        int mid =s+(e-s)/2;
        int n =-1;

        while(s<=e){
            if(nums[mid]==target){
                n=mid;
                e = mid-1;
            }
            else if(nums[mid]<target){
                s = mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return n;
        

    }
    int last(vector<int>& nums, int target){
        int s =0;
        int e =nums.size()-1;
        int mid =s+(e-s)/2;
        int n=-1 ;

        while(s<=e){
            if(nums[mid]==target){
                n=mid;
                s = mid+1;
            }
            else if(nums[mid]<target){
                s = mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return n;
        

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(first(nums,target));
        ans.push_back(last(nums,target));
        return ans;
    }
};