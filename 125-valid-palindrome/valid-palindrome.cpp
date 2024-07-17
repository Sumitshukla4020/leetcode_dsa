#include <string>
#include <algorithm>

class Solution {
public:
    bool isPalindrome(std::string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            if (!isalnum(s[i])) {
                i++;
                continue;
            }
            if (!isalnum(s[j])) {
                j--;
                continue;
            }
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
