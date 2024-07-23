class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;  // Vector to store the final list of quadruplets
        set<vector<int>> out;  // Set to store unique quadruplets

        int n = nums.size();
        sort(nums.begin(), nums.end());  // Sort the array to use two-pointer technique

        // Iterate over the array with two nested loops
        for(int i = 0; i < n - 3; i++) {
            for(int j = i + 1; j < n - 2; j++) {
                int low = j + 1;  // Initialize the low pointer
                int high = n - 1;  // Initialize the high pointer

                // Use two-pointer technique to find the remaining two numbers
                while(low < high) {
                    // Calculate the sum of the four numbers
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[low] + (long long)nums[high];

                    if(sum < target) {
                        low++;  // If sum is less than target, move the low pointer to the right
                    } else if(sum == target) {
                        // If sum equals target, add the quadruplet to the set to ensure uniqueness
                        out.insert({nums[i], nums[j], nums[low], nums[high]});
                        low++;
                        high--;
                    } else {
                        high--;  // If sum is greater than target, move the high pointer to the left
                    }
                }
            }
        }

        // Convert the set of unique quadruplets to the result vector
        for(auto it : out) {
            ans.push_back(it);
        }
        return ans;  // Return the list of quadruplets
    }
};
