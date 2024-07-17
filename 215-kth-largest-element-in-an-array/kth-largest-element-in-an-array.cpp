class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int a;
        for(int i=0;i<k;i++){
            if(i==k-1){
                a = pq.top();
            }
            pq.pop();
        }
        return a;
    }
};