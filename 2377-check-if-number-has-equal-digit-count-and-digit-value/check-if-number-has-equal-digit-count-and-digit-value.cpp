class Solution {
public:
    bool digitCount(string num) {
        int n = num.size();
        map<int , int> mp;
        for(int i=0;i<n;i++){
            mp[i]=0;
        }
        for(int i=0;i<n;i++){
            int a = num[i] - '0';
            mp[a]++;
        }
        for(int i=0;i<n;i++){
            if(mp[i]!=num[i] - '0'){
                return false;
            }
        }
        return true;
    }
};