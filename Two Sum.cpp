class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create an unordered_map to store numbers and their indices
        unordered_map<int, int> numMap;

        // Get the number of elements in the vector
        int n = nums.size();

        // Iterate over each element in the vector
        for (int i = 0; i < n; i++) {
            // Calculate the number needed to reach the target
            int remain = target - nums[i];

            // Check if the needed number is already in the map
            if (numMap.find(remain) != numMap.end()) {
                // If found, return the indices of the two numbers
                return {numMap[remain], i};
            }

            // Store the current number and its index in the map
            numMap[nums[i]] = i;
        }

        // If no solution is found, return an empty vector
        return {};
    }
};
