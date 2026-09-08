class Solution {
   public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int, int> freq;
        int sum = 0;
        freq[0] = 1;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (freq.find(sum - k) != freq.end()) {
                ans += freq[sum - k];
            }
            freq[sum]++;
        }
        return ans;
    }
};