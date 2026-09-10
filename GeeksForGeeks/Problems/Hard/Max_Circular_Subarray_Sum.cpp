class Solution {
   public:
    int maxCircularSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int currmax = 0, maxi = arr[0];
        int currmin = 0, mini = arr[0];
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += arr[i];
            currmax = max(arr[i], currmax + arr[i]);
            maxi = max(currmax, maxi);
            currmin = min(arr[i], currmin + arr[i]);
            mini = min(currmin, mini);
        }
        if (maxi < 0) {
            return maxi;
        }
        return max(maxi, total - mini);
    }
};