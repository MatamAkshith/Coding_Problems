class Solution {
   public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int ans = 0;
        int sum = 0;
        unordered_map<int, int> freq;
        freq[0] = -1;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (freq.find(sum - k) != freq.end()) {
                ans = max(ans, i - freq[sum - k]);
            }
            if (freq.find(sum) == freq.end()) {
                freq[sum] = i;
            }
        }
        return ans;
    }
};