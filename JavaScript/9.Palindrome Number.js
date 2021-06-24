/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
    let str = x.toString().split("");
    while (str.length > 1) {
        if (str.pop() !== str.shift()) {
            return false;
        }
    }
    return true;
};

isPalindrome(-121);
