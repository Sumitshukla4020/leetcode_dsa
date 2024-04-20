class Solution {
public:
    int pivot(vector<int>& nums){
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;

        while(s<e){
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }

    int find(vector<int>& nums, int s, int e,int target){
        int mid = s+(e-s)/2;

        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid = s+(e-s)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pindex = pivot(nums);
        if(target>=nums[pindex] && target<=nums[nums.size()-1]){
            return find(nums, pindex, nums.size()-1,target);
        }
        else{
            return find(nums, 0, pindex-1,target);
        }
    }
};