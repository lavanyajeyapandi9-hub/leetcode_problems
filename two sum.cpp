#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Store value as key and index as value
        std::unordered_map<int, int> seen;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement already exists in the map
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }
            
            // Otherwise, add current number and its index to the map
            seen[nums[i]] = i;
        }
        
        return {}; // Return empty vector if no solution is found
    }
};
