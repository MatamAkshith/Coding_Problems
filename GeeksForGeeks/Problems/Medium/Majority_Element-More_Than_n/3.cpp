class Solution {
   public:
    vector<int> findMajority(vector<int>& arr) {
        // code here
        int n = arr.size();
        int flag = n / 3;
        vector<int> res;
        sort(arr.begin(), arr.end());
        for (int i = 1; i < n; i++) {
            int f = 1;
            while (i < n && arr[i] == arr[i - 1]) {
                f++;
                i++;
            }
            if (f > flag) {
                if (res.empty()) {
                    res.push_back(arr[i - 1]);
                    continue;
                }
                if (res.back() != arr[i - 1]) {
                    res.push_back(arr[i - 1]);
                }
            }
        }
        return res;
    }
};