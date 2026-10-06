#include <vector>
#include <string>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";
        
        // Start with the first string as the initial prefix candidate
        std::string prefix = strs[0];
        
        for (int i = 1; i < strs.size(); i++) {
            // Cut down the prefix until it matches the beginning of strs[i]
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                
                // If the prefix becomes empty, there is no common prefix
                if (prefix.empty()) return "";
            }
        }
        
        return prefix;
    }
};
