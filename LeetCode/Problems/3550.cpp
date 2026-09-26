class Solution {
   public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int dsum = 0;
            while (nums[i]) {
                dsum += nums[i] % 10;
                nums[i] /= 10;
            }
            if (dsum == i) {
                return i;
            }
        }
        return -1;
    }
};