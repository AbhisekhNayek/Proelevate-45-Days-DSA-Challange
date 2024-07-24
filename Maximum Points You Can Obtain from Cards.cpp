class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();  // Get the total number of card points

        int sum = 0;  // Initialize the sum of the first 'k' cards

        // Calculate the sum of the first 'k' cards
        for(int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }

        int maxSum = sum;  // Initialize the maximum sum with the current sum

        // Iterate backwards from the k-th card to the first card
        for(int i = k - 1; i >= 0; i--) {
            sum -= cardPoints[i];  // Subtract the i-th card point from the sum
            sum += cardPoints[n - k + i];  // Add the corresponding card point from the end of the array
            maxSum = max(sum, maxSum);  // Update the maximum sum if the current sum is greater
        }

        return maxSum;  // Return the maximum sum of 'k' cards
    }
};
