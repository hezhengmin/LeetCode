/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function (digits) {
    let temp = 1;
    for (let index = digits.length - 1; index >= 0; index--) {
        digits[index] = digits[index] + temp;
        temp = digits[index] >= 10 ? 1 : 0;
        digits[index] = digits[index] % 10;
    }
    if (temp) digits.unshift(1);
    return digits;
};

plusOne([4, 3, 2, 1]);
