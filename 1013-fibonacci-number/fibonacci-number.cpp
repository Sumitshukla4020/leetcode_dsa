class Solution {
public:
    int solve(int n){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        int a = solve(n-1)+solve(n-2);
        return a;
    }
    int fib(int n) {
        return solve(n);

    }
};