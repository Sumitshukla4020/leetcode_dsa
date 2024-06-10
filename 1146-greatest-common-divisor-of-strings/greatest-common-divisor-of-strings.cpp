class Solution {
public:
    int gcd(int n, int m){
        int l=1;
        for(int i=2;i<=min(n,m);i++){
            if(n%i==0 && m%i==0){
                l = i;
            }
        }
        return l;
    } 
    string gcdOfStrings(string str1, string str2) {
        int n= str1.size();
        int m = str2.size();
        string ans = "";
        if(str1+str2!=str2+str1){
            return ans;
        }
        int k = gcd(n,m);
        for(int i=0;i<k;i++){
            ans = ans + str1[i];
        }
        return ans;
    }
};