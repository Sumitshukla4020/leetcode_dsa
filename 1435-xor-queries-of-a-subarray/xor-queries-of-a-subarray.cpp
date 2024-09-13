class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        // vector<int> ans;
        // for(int i=0;i<queries.size();i++){
        //     int a = queries[i][0];
        //     int b = queries[i][1];
        //     int k = 0;
        //     while(a<=b){
        //         k = k^arr[a++];
        //     }
        //     ans.push_back(k);
        // }
        // return ans;

        int n = arr.size();
        vector<int> prefix(n);
        prefix[0] = arr[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] ^ arr[i];
        }
        
        vector<int> ans;
        for (const auto& q : queries) {
            int a = q[0];
            int b = q[1];
            if (a == 0) {
                ans.push_back(prefix[b]);  
            } else {
                ans.push_back(prefix[b] ^ prefix[a-1]);  
            }
        }
        
        return ans;
    }
};