class Solution {
   public:
    int findEquilibrium(vector<int>& arr) {
        // code here
        int n = arr.size();
        int fore = 0, after = 0;
        for (int i = n - 1; i >= 0; i--) {
            after += arr[i];
        }
        for (int i = 1; i < n; i++) {
            fore += arr[i - 1];
            after = after - arr[i] - arr[i - 1];
            if (fore == after) {
                return i;
            }
            after += arr[i];
        }
        return -1;
    }
};