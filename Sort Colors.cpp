class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int l = 0, i = 0, r = nums.size() - 1;

        while (i <= r) 
        {
            if (nums[i] == 0) 
            {
                swap(nums, l++, i++); // Move 0 to the left
            } 
            else if (nums[i] == 2) 
            {
                swap(nums, i, r--); // Move 2 to the right
            } 
            else 
            {
                i++; // Keep 1 in the middle
            }
        }
    }

    void swap(vector<int>& nums, int p1, int p2) 
    {
        int temp = nums[p1];
        nums[p1] = nums[p2];
        nums[p2] = temp;
    }
};
