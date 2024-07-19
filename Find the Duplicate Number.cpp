class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size(); // Get the size of the input array
        
        // First loop: Mark the occurrences
        for(int i = 0; i < n; i++) {
            int index = abs(nums[i]) % n; // Get the index to be incremented
            nums[index] += n; // Increment the value at this index by n
        }

        // Second loop: Identify the duplicate
        for(int i = 0; i < n; i++) {
            if(nums[i] / n >= 2) { // Check if this index was incremented twice
                return i; // Return the index as the duplicate number
            }
        }
      // Return -1 if no duplicate is found (though the problem guarantees a duplicate exists)
        return -1; 
    }
};
