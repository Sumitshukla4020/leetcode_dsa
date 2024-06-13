class Solution {
public:
    bool isValid(string s) {
        stack<char> sace;
        for(int i=0;i<s.size();i++){
            if(sace.empty()){
                sace.push(s[i]);
                continue;
            }
            if(sace.top()=='(' && s[i]==')') {
                sace.pop();
            }
            else if(sace.top()=='{' && s[i]=='}' ){
                sace.pop();
            }
            else if(sace.top()=='[' && s[i]==']' ){
                sace.pop();
            }
            else{
                sace.push(s[i]);
            }

        }
        if(sace.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};