/**
 * @param {number} n
 * @return {string}
 */
var countAndSay = function (n) {
    let arr = "1";
    let cnt = 1;
    let result = "1";
    for (let i = 0; i < n - 1; i++) {
        result = "";
        for (let j = 0; j < arr.length; j++) {
            if (arr[j] !== arr[j + 1]) {
                result += cnt + arr[j];
                cnt = 1;
            } else {
                cnt++;
            }
        }
        arr = result;
    }
    return result;
};

console.log(countAndSay(4));
