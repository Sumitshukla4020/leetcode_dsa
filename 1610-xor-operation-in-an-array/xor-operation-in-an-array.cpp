class Solution {
public:
    int xorOperation(int n, int start) {
        int ans =0;
        for(int j=0;j<n;j++){
            ans = ans^ (start+2*j);
        }
        return ans;
    }
};