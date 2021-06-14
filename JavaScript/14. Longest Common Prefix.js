/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
    let prefix = "";
    for (let j = 0; j < strs[0].length; j++) {
        if (strs.every((element) => element[j] === strs[0][j])) {
            prefix += strs[0][j];
        } else {
            break;
        }
    }
    return prefix;
};

longestCommonPrefix(["flower", "flow", "flight"]);
