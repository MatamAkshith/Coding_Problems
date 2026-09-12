class Solution {
   public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        int res = 0;
        for (auto& [x, idx] : mp) {
            int m = idx.size();
            if (m == 3) {
                int i1 = idx[0];
                int i2 = idx[1];
                int i3 = idx[2];
                if (i2 - i1 == i3 - i2) {
                    res++;
                }
            }
        }
        return res;
    }
};
©leetcode