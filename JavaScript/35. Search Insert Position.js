/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function (nums, target) {
    let l = 0;
    let r = nums.length - 1;
    while (l <= r) {
        const m = parseInt((l + r) / 2);

        if (nums[m] > target) {
            r = m - 1;
        } else if (nums[m] < target) {
            l = m + 1;
        } else {
            return m;
        }
    }

    if (l > r && target > nums[r]) return r + 1;
    else return l;
};

const ans = searchInsert([1, 3, 5, 6], 7);

console.log(ans);
