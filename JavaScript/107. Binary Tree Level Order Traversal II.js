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
 * @return {number[][]}
 */
var levelOrderBottom = function (root) {
    let queue = [];
    let result = [];

    if (root === null) return [];
    queue.push(root);
    while (queue.length > 0) {
        let len = queue.length;
        let array = [];

        for (let index = 0; index < len; index++) {
            const u = queue.shift();
            array.push(u.val);
            if (u.left !== null) {
                queue.push(u.left);
            }
            if (u.right !== null) {
                queue.push(u.right);
            }
        }

        result.push(array);
    }
    return result.reverse();
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
// let F = new TreeNode(25, null, null);
// let G = new TreeNode(27, null, null);

// A.left = B;
// A.right = C;

// B.left = F;
// B.right = G;

// C.left = D;
// C.right = E;

// console.log(levelOrderBottom(A));
