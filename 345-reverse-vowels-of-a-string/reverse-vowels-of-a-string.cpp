class Solution {
public:
    bool vowels(string a, char b){
        for(int i=0;i<a.size();i++){
            if(a[i]==b){
                return true;
            }
        }
        return false;
    }
    string reverseVowels(string s) {
        string a = "aeiouAEIOU";
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(vowels(a,s[i]) && vowels(a,s[j])){
                swap(s[i++],s[j--]);
            }
            else if(vowels(a,s[i])){
                j--;
            }
            else if(vowels(a,s[j])){
                i++;
            }
            else{
                j--;
                i++;
            }
        }
        return s;

    }
};