/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteDuplicates = function (head) {
    if (head === null) return null;

    let node = head;

    while (node.next != null) {
        if (node.val === node.next.val) {
            node.next = node.next.next;
        } else {
            node = node.next;
        }
    }
    return head;
};
/*

function ListNode(val, next) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
}

let A = new ListNode(1, null);
let B = new ListNode(1, null);
let C = new ListNode(2, null);
let D = new ListNode(3, null);
let E = new ListNode(3, null);

A.next = B;
B.next = C;
C.next = D;
D.next = E;

let node = A;
while (node.next != null) {
    if (node.val === node.next.val) {
        node.next = node.next.next;
    } else {
        node = node.next;
    }
}
console.log(A);

*/
