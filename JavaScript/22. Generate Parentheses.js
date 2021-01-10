/**
 * @param {number} n
 * @return {string[]}
 */
var generateParenthesis = function (n) {
    const res = [];

    dfs(0, 0, "");

    function dfs(left, right, str) {
        if (left > n) return;
        if (right > n) return;

        if (str.length === n * 2) {
            res.push(str);
            return;
        }
        if (left >= right) {
            dfs(left + 1, right, str + "(");
            dfs(left, right + 1, str + ")");
        }
    }

    return res;
};
