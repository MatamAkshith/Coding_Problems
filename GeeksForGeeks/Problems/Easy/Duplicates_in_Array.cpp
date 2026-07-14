class Solution {
   public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int> res;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int idx = abs(arr[i]) - 1;
            if (arr[idx] < 0) {
                res.push_back(idx + 1);
            }
            arr[idx] = -arr[idx];
        }
        return res;
    }
};