class Solution {
public:
    int lengthOfLongestSubstring(string s) {
          int result, length;
        string tmp = "";
        result = length = 0;
        for (int i = 0; i < s.length(); i++)
        {
            tmp = "";
            int ascii[256] = {};
            length = 0;
            for (int j = i; j < s.length(); j++)
            {
                ascii[s[j]]++;
                if (ascii[s[j]] >= 2)
                    break;
                tmp += s[j];
                length++;
            }
            result = max(result, length);
        }

        return result;
    }
};