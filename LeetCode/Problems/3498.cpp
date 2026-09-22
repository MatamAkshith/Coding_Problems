class Solution {
   public:
    int reverseDegree(string s) {
        int n = s.length();
        int res = 0;
        int i = 1;
        for (char c : s) {
            int val = 'z' - c + 1;
            res += (val * i);
            i++;
        }
        return res;
    }
};