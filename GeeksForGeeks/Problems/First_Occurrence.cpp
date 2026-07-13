class Solution {
   public:
    int firstSearch(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int l = 0, r = n - 1;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (arr[mid] == k) {
                r = mid;
            } else if (arr[mid] > k) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        if (l == r && arr[r] == k) {
            return r;
        }
        return -1;
    }
};