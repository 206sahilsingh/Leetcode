class Solution {
public:
    int mySqrt(int x) {
         if (x == 0 || x == 1) return x;  // base cases

        int left = 1, right = x, ans = 0;

        while (left <= right) {
            long long mid = left + (right - left) / 2;  // avoid overflow
            long long sq = mid * mid;

            if (sq == x) {
                return mid;  // perfect square
            } else if (sq < x) {
                ans = mid;   // store candidate
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return ans;  // floor of sqrt(x)
    }
};