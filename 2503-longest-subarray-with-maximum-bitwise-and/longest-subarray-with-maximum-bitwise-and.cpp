class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int longest = 0; 
        int length = 0;
        
        for (int num : nums) {
            if (num == maxi) {
                length++;
                longest = max(longest, length);
            } 
            else {
                length = 0; 
            }
        }
        
        return longest;
    }
};