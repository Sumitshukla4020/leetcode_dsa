class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int a = queries[i][0];
            int b = queries[i][1];
            int k = 0;
            while(a<=b){
                k = k^arr[a++];
            }
            ans.push_back(k);
        }
        return ans;
    }
};