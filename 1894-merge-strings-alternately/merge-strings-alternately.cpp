class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int n,m;
        n= word1.size();
        m= word2.size();
        int i=0;
        while(i<n && i<m){
            ans = ans + word1[i] + word2[i++];
        }
        while(i<n){
            ans = ans + word1[i++];
        }
        while(i<m){
            ans = ans + word2[i++];
        }
        return ans;
    }
};