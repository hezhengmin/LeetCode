/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function (s) {
    // trime() 字串前後兩端刪除空白字元
    const array = s.trim().split(" ");
    return array[array.length - 1].length;
};

console.log(lengthOfLastWord("a "));
