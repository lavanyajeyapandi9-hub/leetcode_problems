#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        
        while (low <= high) {
            // Prevents potential integer overflow compared to (low + high) / 2
            int mid = low + (high - low) / 2; 
            
            if (nums[mid] == target) {
                return mid; // Target found
            } else if (nums[mid] < target) {
                low = mid + 1; // Target is in the right half
            } else {
                high = mid - 1; // Target is in the left half
            }
        }
        
        // If not found, 'low' will point to the correct insertion index
        return low; 
    }
};
