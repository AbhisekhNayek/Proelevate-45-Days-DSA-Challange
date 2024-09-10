class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) 
        {
            if (nums[left] == target)
                return left;
            if (nums[right] == target)
                return right;

            if (nums[left] < nums[right]) 
            {
                // If the array segment is already sorted
                if (target > nums[left] && target < nums[right])
                    left++; 
                else
                    right--; 
            } 
            else 
            {
                // If the array segment is rotated
                if (nums[left] > target)
                    left++; t
                else
                    right--; 
            }
        }

        return -1; // Target not found
    }
};
