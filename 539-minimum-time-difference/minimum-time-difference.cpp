class Solution {
public:
    int solve(string s) {
        int hour = (s[0] - '0') * 10 + (s[1] - '0');
        int mi = (s[3] - '0') * 10 + (s[4] - '0');
        return hour * 60 + mi;
    }

    int findMinDifference(vector<string>& timePoints) {
        vector<int> arr;
        
        for (int i = 0; i < timePoints.size(); i++) {
            int n = solve(timePoints[i]);
            arr.push_back(n);
        }
        
        sort(arr.begin(), arr.end());
        
        arr.push_back(arr[0] + 1440);
        
        int mi = INT_MAX;
        
        for (int i = 1; i < arr.size(); i++) {
            mi = min(mi, arr[i] - arr[i - 1]);
        }
        
        return mi;
    }
};