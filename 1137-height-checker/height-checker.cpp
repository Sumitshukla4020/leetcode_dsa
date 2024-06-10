class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> demon;
        for(int i=0; i<heights.size();i++){
            demon.push_back(heights[i]);
        }
        sort(demon.begin(),demon.end());
        int count=0;
        for(int i=0; i<heights.size();i++){
            if(heights[i]!=demon[i]){
                count++;
            }
        }
        return count;
    }
};