// class Solution {
// public:
// int solve(int n, int i, vector<int> arr){
//     if(i==n){
//         return 1;
//     }
//     if(i>n){
//         return 0;
//     }
//     if(arr[i]!=-1){
//         return arr[i];
//     }
//     arr[i] = solve(n,i+1,arr) + solve(n,i+2,arr);
//     return arr[i];
// }
//     int climbStairs(int n) {
//         vector<int> arr(n+1,-1);
//         int so = solve(n,0,arr);
//         return so;
//     }
// };
class Solution {
public:
    int solve(int n, vector<int>& arr) {
        if (n == 0) return 1; // Base case: one way to stay at step 0 (do nothing)
        if (n < 0) return 0;  // Base case: no way to reach negative steps

        if (arr[n] != -1) return arr[n]; // Memoization check

        arr[n] = solve(n - 1, arr) + solve(n - 2, arr); // Recursive calls
        return arr[n];
    }

    int climbStairs(int n) {
        vector<int> arr(n + 1, -1); // Memoization vector
        return solve(n, arr);
    }
};
