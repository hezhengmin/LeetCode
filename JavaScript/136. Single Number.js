/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function (nums) {
    const map = {};

    for (const num of nums) {
        if (map[num] === undefined) {
            map[num] = 1;
        } else {
            map[num]++;
        }
    }
    for (const key in map) {
        //console.log(key, map[key]);
        if (map[key] === 1) return key;
    }
};

singleNumber([4, 1, 2, 1, 2]);
