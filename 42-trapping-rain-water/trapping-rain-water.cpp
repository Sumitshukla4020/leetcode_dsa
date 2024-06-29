class Solution {
public:
    
    vector<int> leftsize(vector<int>& height){
        vector<int> left;
        left.push_back(height[0]);
        int maxleft = height[0];
        for(int i=1;i<height.size();i++){
            maxleft = max(maxleft,height[i]);
            left.push_back(maxleft);
        }
        return left;
    }
    vector<int> rightsize(vector<int>& height){
        vector<int> right;
        right.push_back(height[height.size()-1]);
        int maxright = height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--){
            maxright = max(maxright,height[i]);
            right.push_back(maxright);
        }
        reverse(right.begin(), right.end());
        return right;
    }
    int trap(vector<int>& height) {
        
        
        if(height.size()<=2){
            return 0;
        }
            vector<int> left = leftsize(height);
            vector<int> right = rightsize(height);
            
        
        int total=0;
        for(int i=0;i<height.size();i++){
            int water = min(left[i],right[i])-height[i];
            
            if(water>0){
                total+=water;
            }
        }
        return total;

    }
};