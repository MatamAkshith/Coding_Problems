class Solution {
   public:
    int bsearch(vector<int>& arr, int l, int r) {
        if (r == l) {
            return l;
        }
        int mid = l + (r - l) / 2;
        if (arr[mid] < arr[mid + 1]) {
            return bsearch(arr, mid + 1, r);
        } else {
            return bsearch(arr, l, mid);
        }
        return -1;
    }
    int peakElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        int l = 0, r = n - 1;
        int res = bsearch(arr, l, r);
        return res;
    }
};