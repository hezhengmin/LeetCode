/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function (nums, val) {
    let index = 0;
    while (index < nums.length) {
        const element = nums[index];
        if (element === val) {
            nums.splice(index, 1);
        } else {
            index++;
        }
    }
    console.log(nums);
    return nums.length;
};

const result = removeElement([0, 1, 2, 2, 3, 0, 4, 2], 2);
console.log(result);

// Input: nums = [0,1,2,2,3,0,4,2], val = 2
// Output: 5, nums = [0,1,4,0,3]
