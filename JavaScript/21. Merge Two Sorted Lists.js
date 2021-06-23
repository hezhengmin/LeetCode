/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
function ListNode(val, next = null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
}

let n1 = new ListNode(1);
let n2 = new ListNode(2);
let n3 = new ListNode(4);

n1.next = n2;
n2.next = n3;

let m1 = new ListNode(1);
let m2 = new ListNode(3);
let m3 = new ListNode(4);

m1.next = m2;
m2.next = m3;

var mergeTwoLists = function (l1, l2) {
    let head = { val: 0, next: null };
    let curr = head;
    while (l1 && l2) {
        let temp = null;
        if (l1.val < l2.val) {
            temp = new ListNode(l1.val, null);
            curr.next = temp;
            l1 = l1.next;
        } else {
            temp = new ListNode(l2.val, null);
            curr.next = temp;
            l2 = l2.next;
        }

        curr = curr.next;
    }

    curr.next = l1||l2;
    
    return head.next;
};

mergeTwoLists(n1, m1);

// Input: l1 = [1,2,4], l2 = [1,3,4]
// Output: [1,1,2,3,4,4]
