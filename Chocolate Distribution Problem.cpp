
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        // Sort the array
        sort(a.begin(), a.end());
        
        // Initialize the minimum difference to a large value
        long long minimum = LLONG_MAX;
        
        // Traverse the array and find the minimum difference
        for (long long i = 0; i + m - 1 < n; i++) {
            long long diff = a[i + m - 1] - a[i];
            minimum = min(diff, minimum);
        }
        
        return minimum;
    }   
};
