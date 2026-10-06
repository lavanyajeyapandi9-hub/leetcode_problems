#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        // Handle the edge case where the array is empty
        if (nums.empty()) {
            return 0;
        }
        
        // Initialize the slow pointer
        int i = 0;
        
        // Iterate through the vector with the fast pointer starting from the second element
        for (int j = 1; j < nums.size(); j++) {
            // If a new unique element is found
            if (nums[j] != nums[i]) {
                i++;             // Move the slow pointer forward
                nums[i] = nums[j]; // Update the position with the unique element
            }
        }
        
        // The number of unique elements is the index i + 1
        return i + 1;
    }
};
