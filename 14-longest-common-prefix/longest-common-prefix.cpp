class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
        return "";
    }
    std::string shortest = *std::min_element(strs.begin(), strs.end(), 
        [](const std::string& a, const std::string& b) { return a.size() < b.size(); }); // Find the shortest string in the array

    for (size_t i = 0; i < shortest.size(); ++i) {
        for (const std::string& other : strs) {
            if (other[i] != shortest[i]) {
                return shortest.substr(0, i); // Return the prefix up to the point where the characters differ
            }
        }
    }
    return shortest;
    }
};