class Solution {
public:
    bool canJump(vector<int>& nums) {
        // Get the index of the last element
        int n = nums.size() - 1;
        // Initialize lastPos to the last index
        int lastPos = n;

        // Iterate from the second last element to the first element
        for(int i = n - 1; i >= 0; i--) {
            // If the current position + maximum jump from that position 
            // can reach or exceed the last known reachable position
            if(i + nums[i] >= lastPos) {
                // Update the last known reachable position to the current position
                lastPos = i;
            }
        }
        // If we can reach the first position from the last known reachable position
        return lastPos == 0;
    }
};
