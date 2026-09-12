class Solution {
   public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        vector<int> temp = nums;
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        for (auto& p : mp) {
            vector<int> idx = p.second;
            int m = idx.size();
            if (m < 3) {
                continue;
            }
            int gap = idx[1] - idx[0];
            bool flag = true;
            for (int i = 2; i < m; i++) {
                int curr = idx[i] - idx[i - 1];
                if (curr != gap) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                res++;
            }
        }
        return res;
    }
};
©leetcode