class Solution {
   public:
    int countCommas(int n) {
        int count = 0;
        if (n >= 1 && n <= 999) {
            count = 0;
        } else {
            count += n - 999;
        }
        return count;
    }
};