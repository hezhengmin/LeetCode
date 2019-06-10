class Solution {
public:
    int alph[256] = {0};
    void init() {
        alph['I'] = 1;
        alph['V'] = 5;
        alph['X'] = 10;
        alph['L'] = 50;
        alph['C'] = 100;
        alph['D'] = 500;
        alph['M'] = 1000;
    }
    int romanToInt(string s) {
        init();
        int previous = 0, result = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            if (previous && previous < alph[s[i]])
                result += alph[s[i]] - previous * 2;
            else {
                result += alph[s[i]];
            }
            previous = alph[s[i]];
        }
        return result;
    }
};