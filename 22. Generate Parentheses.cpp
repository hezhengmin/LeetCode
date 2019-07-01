class Solution {
   public:
    char array[1000];
    vector<string> result;
    void dfs(int index, int target, int left, int right) {
        if (left == target && right == target) {
            array[target * 2] = '\0';
            result.push_back(array);
            return;
        }
        if (left <= target && right <= target && left >= right) {
            array[index] = '(';
            dfs(index + 1, target, left + 1, right);

            array[index] = ')';
            dfs(index + 1, target, left, right + 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        result.clear();
        dfs(0, n, 0, 0);
        return result;
    }
};