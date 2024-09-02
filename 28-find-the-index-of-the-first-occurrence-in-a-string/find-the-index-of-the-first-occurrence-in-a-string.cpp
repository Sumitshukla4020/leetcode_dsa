class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }

        // Get the length of haystack and needle
        int haystackLen = haystack.length();
        int needleLen = needle.length();

        // Loop through the haystack to find the first occurrence of needle
        for (int i = 0; i <= haystackLen - needleLen; i++) {
            // Check if the substring of haystack starting at index i matches the needle
            if (haystack.substr(i, needleLen) == needle) {
                return i;
            }
        }

        // If needle is not found, return -1
        return -1;
    }
};