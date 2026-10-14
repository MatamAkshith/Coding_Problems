class Solution {
   public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) {
            return "";
        }
        if (sum == 0) {
            return "";
        }
        string res = "";
        while (num && sum) {
            int digit = min(9, sum);
            res.push_back('0' + digit);
            sum -= digit;
            num--;
        }
        while (num) {
            res += '0';
            num--;
        }
        return res;
    }
};