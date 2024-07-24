class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;         // Initialize count for the first element
        int ans = nums[0];     // Assume the first element as the majority element

        // Iterate through the vector starting from the second element
        for(int i = 1; i < nums.size(); i++) {
            if(count == 0) {   // If count is zero, update the candidate
                ans = nums[i];
            }

            if(ans == nums[i]) {  // If the current element matches the candidate
                count++;          // Increment the count
            } else {
                count--;          // Otherwise, decrement the count
            }
        }

        return ans;  // Return the candidate which is the majority element
    }
};
