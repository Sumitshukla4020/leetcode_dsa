class Solution {
public:
    int lengthOfLastWord(string s) {
        int a;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                a =i;
                break;
            }
        }
        int count =0;
        for(int i=a;i>=0;i--){
            if(s[i]!=' '){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};