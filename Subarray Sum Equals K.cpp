class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0; // Initialize sum of elements
        int count = 0; // Initialize count of subarrays with sum equals to k

        map<int, int> mp; // Map to store the cumulative sum frequency

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i]; // Add current element to sum

            // If cumulative sum is equal to k, increment count
            if(sum == k) {
                count++;
            }

            // If (sum - k) is found in map, it means there is a subarray
            // whose sum is k, so increment count by the frequency of (sum - k)
            if(mp.find(sum - k) != mp.end()) {
                count += mp[sum - k];
            }

            // Increment the frequency of the cumulative sum in the map
            mp[sum]++;
        }

        return count; // Return the count of subarrays with sum equals to k
    }
};
