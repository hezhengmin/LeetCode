class Solution {
public:
    bool isPalindrome(int x) {
        char str[256];
        sprintf(str, "%d", x);
        int length = strlen(str);
        for (int i = 0, j = length - 1; i <= j; i++, j--) {
            if (str[i] != str[j]) {
                return false;
            }
        }
        return true;
    }
};