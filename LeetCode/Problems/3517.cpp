class Solution {
   public:
    string smallestPalindrome(string s) {
        int n = s.length();
        if (n == 0 || n == 1) {
            return s;
        }
        string temp = "", res = "";
        for (int i = 0; i < n / 2; i++) {
            temp += s[i];
        }
        string mid(1, s[n / 2]);
        sort(temp.begin(), temp.end());
        string rev = temp;
        res += temp;
        reverse(rev.begin(), rev.end());
        if (n % 2 != 0) {
            res += mid;
        }
        res += rev;
        return res;
    }
};