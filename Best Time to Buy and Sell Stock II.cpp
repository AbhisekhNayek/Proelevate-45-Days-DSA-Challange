class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Get the number of days
        int n = prices.size();
        
        // Initialize profit to 0
        int profit = 0;

        // Loop through the prices starting from the second day
        for(int i = 1; i < n; i++) {
            // If the price on the current day is higher than the previous day,
            // add the difference to the profit
            if(prices[i] > prices[i-1]) {
                profit += (prices[i] - prices[i-1]);
            }
        }
        
        // Return the total profit
        return profit;
    }
};
