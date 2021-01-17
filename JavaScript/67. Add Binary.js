/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function (a, b) {
    const len = Math.max(a.length, b.length);

    a = a.split("").reverse().join("");
    b = b.split("").reverse().join("");

    let result = [],
        temp = 0,
        carry = 0;

    for (let i = 0; i < len; i++) {
        const A = a[i] === undefined ? 0 : a[i];
        const B = b[i] === undefined ? 0 : b[i];

        const sum = Number(A) + Number(B) + carry;
        temp = sum % 2;

        if (sum === 2 || sum === 3) {
            carry = 1;
        } else {
            carry = 0;
        }

        result.push(temp);
    }

    if (carry) result.push(carry);

    return result.reverse().join("");
};

const ans = addBinary("1111", "1111");

console.log(ans);
/*
Input: a = "1111", b = "1111"
Output: "11110"
*/
