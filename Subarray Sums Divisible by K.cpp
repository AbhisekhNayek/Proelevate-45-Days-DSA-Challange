class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // Initialize an unordered map to store the frequency of remainders
        unordered_map<int, int> m;

        // Get the size of the input vector
        int n = nums.size();
        // Initialize the answer to zero
        int ans = 0;
        // Initialize the remainder and cumulative sum to zero
        int rem = 0;
        int sum = 0;

        // There's one way to have a remainder of 0 at the start
        m[rem]++;

        // Iterate through the array
        for (int i = 0; i < n; i++) {
            // Add the current element to the cumulative sum
            sum += nums[i];
            // Compute the remainder of the cumulative sum divided by k
            rem = sum % k;

            // If the remainder is negative, convert it to a positive remainder
            if (rem < 0) {
                rem += k;
            }

            // If this remainder has been seen before, add the count of such remainders to the answer
            if (m.find(rem) != m.end()) {
                ans += m[rem];
            }

            // Increment the count of this remainder in the map
            m[rem]++;
        }

        // Return the total number of subarrays divisible by k
        return ans;
    }
};
