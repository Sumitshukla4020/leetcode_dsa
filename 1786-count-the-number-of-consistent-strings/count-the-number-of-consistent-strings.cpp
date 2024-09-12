class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        vector<int> arr(26, -1);
        for(int i=0;i<allowed.size();i++){
            int index = allowed[i] - 'a';
            arr[index] = 1;
        }

        for(int i=0;i<words.size();i++){
            int j =0;
            int flag = 1;
            string s = words[i];
            while(j<s.size()){
                int index = s[j]-'a';
                j++;
                if(arr[index]==-1){
                    flag = 0;
                    break;
                }
            }
            if(flag==1){
                count++;
            }
        }
        return count;
    }
};