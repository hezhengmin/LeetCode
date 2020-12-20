class Solution {
public:
    int reverse(int x) {
        long long result = 0;
        while (x) {
            int y = x % 10;
            x /= 10;
            result = result * 10 + y;
        }
        return result > 2147483647 || result < -2147483648 ? 0 : result;
    }
};