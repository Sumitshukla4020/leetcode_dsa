class Solution {
public:
    long long int solve(int x){
        int s =1;
        int e = x;
        long long int mid = s+(e-s)/2;
        int ans=-1;
        if(x==0){
            return 0;
        }

        while(s<=e){
            long long int sq = mid*mid;
            if(sq==x){
                return mid;
            }
            else if(sq>x){
                e=mid-1;
            }
            else{
                ans= mid;
                s=mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
        
    }
    int mySqrt(int x) {
        return solve(x);
    }
};