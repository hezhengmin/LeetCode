/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var maxDepth = function (root) {
    if (root === null) return 0;
    return 1 + Math.max(maxDepth(root.left), maxDepth(root.right));
};

// function TreeNode(val, left, right) {
//     this.val = val === undefined ? 0 : val;
//     this.left = left === undefined ? null : left;
//     this.right = right === undefined ? null : right;
// }

// let A = new TreeNode(3, null, null);
// let B = new TreeNode(9, null, null);
// let C = new TreeNode(20, null, null);
// let D = new TreeNode(15, null, null);
// let E = new TreeNode(7, null, null);

// A.left = B;
// A.right = C;

// C.left = D;
// C.right = E;

// console.log(maxDepth(A));

// Input: root = [3,9,20,null,null,15,7]
// Output: 3
