class Solution {
   public:
    int bsearch(vector<int>& nums, int l, int r) {
        if (l == r) return l;
        int mid = l + (r - l) / 2;
        if (nums[mid] < nums[mid + 1]) {
            return bsearch(nums, mid + 1, r);
        } else {
            return bsearch(nums, l, mid);
        }
        return -1;
    }
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1;
        int ans = bsearch(nums, l, r);
        return ans;
    }
};