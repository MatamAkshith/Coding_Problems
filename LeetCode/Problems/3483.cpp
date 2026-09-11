class Solution {
   public:
    unordered_map<int, int> freq;
    int count = 0;
    void number(int a, int b, int c) {
        if (a == 0) {
            return;
        }
        int num = (a * 100) + (b * 10) + c;
        if (num % 2 == 0 && freq.find(num) == freq.end()) {
            freq[num]++;
            count++;
        }
        return;
    }
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == i) {
                    continue;
                }
                for (int k = 0; k < n; k++) {
                    if (k == i || k == j) {
                        continue;
                    }
                    number(digits[i], digits[j], digits[k]);
                    number(digits[i], digits[k], digits[j]);
                    number(digits[j], digits[k], digits[i]);
                    number(digits[j], digits[i], digits[k]);
                    number(digits[k], digits[i], digits[j]);
                    number(digits[k], digits[j], digits[i]);
                }
            }
        }
        return count;
    }
};