class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();  // Get the number of elements in the height vector

        int l = 0;    // Initialize the left pointer to the beginning of the vector
        int r = n - 1;  // Initialize the right pointer to the end of the vector
        int ans = 0;  // Variable to store the maximum area found

        while (l < r) {  // Loop until the left pointer is less than the right pointer
            // Calculate the area with the current left and right pointers
            ans = max(ans, (r - l) * min(height[l], height[r]));  

            if (height[l] < height[r]) {  // If the height at the left pointer is less than the height at the right pointer
                l++;  // Move the left pointer to the right
            } else {  // If the height at the right pointer is less than or equal to the height at the left pointer
                r--;  // Move the right pointer to the left
            }
        }
        return ans;  // Return the maximum area found
    }
};
