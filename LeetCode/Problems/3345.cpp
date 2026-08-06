class Solution {
   public:
    int digprod(int n) {
        int prod = 1;
        while (n) {
            int rem = n % 10;
            prod *= rem;
            n /= 10;
        }
        return prod;
    }

    int smallestNumber(int n, int t) {
        int res = digprod(n);
        int temp = n;
        while (res % t != 0) {
            temp++;
            res = digprod(temp);
        }
        return temp;
    }
};