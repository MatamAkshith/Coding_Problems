class Solution {
public:
  int gcdOfOddEvenSums(int n) {
    int sumOdd = 0, sumEven = 0;
    for (int i = 1; i <= n * 2; i++) {
      if (i % 2 == 0) {
        sumEven += i;
      } else {
        sumOdd += i;
      }
    }
    int res = gcd(sumOdd, sumEven);
    return res;
  }
  int gcd(int a, int b) {
    if (a == 0) {
      return b;
    }
    return gcd(b % a, a);
  }
};