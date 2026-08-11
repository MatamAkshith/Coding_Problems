class Solution {
   public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int sum = nums[0];
        unordered_set<int> s;
        s.insert(nums.begin(), nums.end());
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1] + 1) {
                break;
            }
            count++;
            sum += nums[i];
        }
        if (s.find(sum) == s.end()) {
            return sum;
        }
        sum++;
        while (s.find(sum) != s.end()) {
            sum++;
        }
        return sum;
    }
};