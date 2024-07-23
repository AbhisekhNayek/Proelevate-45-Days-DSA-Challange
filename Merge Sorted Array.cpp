class Solution {
public:
    // This function merges two sorted arrays nums1 and nums2 into nums1
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m-1; // Pointer for the end of the first part of nums1
        int p2 = n-1; // Pointer for the end of nums2
        int k = m+n-1; // Pointer for the end of nums1 (including the extra space for nums2)

        // Iterate backwards through nums1 and nums2, merging the larger elements first
        while(p2 >= 0)
        {
            // If p1 is valid and the current element in nums1 is greater than the current element in nums2
            if( (p1 >= 0) && (nums1[p1] > nums2[p2]))
            {
                nums1[k--] = nums1[p1--]; // Place the larger element from nums1 at position k and decrement pointers
            }
            else
            {
                nums1[k--] = nums2[p2--]; // Place the element from nums2 at position k and decrement pointers
            }
        }
    }
};
