class Solution {
   public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> res(2, 0);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        for (int i = 0; i < n; i++) {
            int idx = abs(arr[i]) - 1;
            if (arr[idx] < 0) {
                res[0] = idx + 1;
            }
            arr[idx] = -arr[idx];
        }
        long long tsum = (long long)n * (long long)(n + 1) / 2;
        sum -= res[0];
        int miss = abs(tsum - sum);
        res[1] = miss;
        return res;
    }
};