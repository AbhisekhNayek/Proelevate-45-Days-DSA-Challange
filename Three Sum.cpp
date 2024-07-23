class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        int target = 0; // Define the target sum

        vector<vector<int>> output; // Output vector to store the result triplets
        set<vector<int>> s; // Set to store unique triplets and avoid duplicates

        // Sort the input vector to make it easier to avoid duplicates and use two pointers
        sort(nums.begin(), nums.end());

        // Iterate through the sorted vector
        for(int i = 0; i < n; i++) {
            int j = i + 1; // Initialize the second pointer
            int k = n - 1; // Initialize the third pointer

            // Use two pointers technique to find the triplets
            while(j < k) {
                int sum = (nums[i] + nums[j] + nums[k]); // Calculate the sum of the current triplet

                if(sum == target) {
                    // If the sum is equal to the target, insert the triplet into the set
                    s.insert({nums[i], nums[j], nums[k]});
                    j++; // Move the second pointer to the right
                    k--; // Move the third pointer to the left
                } else if(sum < target) {
                    j++; // If the sum is less than the target, move the second pointer to the right
                } else {
                    k--; // If the sum is greater than the target, move the third pointer to the left
                }
            }
        }

        // Convert the set of triplets to the output vector
        for(auto triplets : s) {
            output.push_back(triplets);
        }
        return output; // Return the result
    }
};
