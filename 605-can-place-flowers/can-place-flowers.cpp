class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count =0;
        int l = flowerbed.size();
        for(int i=0;i<l;i++){
            if(flowerbed[i]==0){
                bool left = (i==0) || flowerbed[i-1]==0;
                bool right = (i==l-1) || flowerbed[i+1]==0;

                if(left && right){
                    count++;
                    flowerbed[i]=1;
               }
            }
        }
        if(count>=n){
            return true;
        }
        else{
            return false;
        }
    }
};