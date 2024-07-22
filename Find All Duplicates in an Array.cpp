class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        // Check if the input array is empty
        if (n == 0) {
            return {-1};
        }

        // Iterate through the array and mark the occurrences
        for (int i = 0; i < n; i++) {
            // Find the index to be incremented by calculating the correct position
            int index = (nums[i] - 1) % n;
            // Increment the value at the calculated index by n to mark the occurrence
            nums[index] += n;
        }

        // Iterate through the modified array to find duplicates
        for (int i = 0; i < n; i++) {
            // Check if the value at index i indicates it was encountered twice
            if ((nums[i] - 1) / n >= 2) {
                // Add the index + 1 to the result as the values are from 1 to n
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};
