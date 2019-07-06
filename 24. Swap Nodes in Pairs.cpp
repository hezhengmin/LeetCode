/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
   public:
    void swapValue(ListNode* A, ListNode* B) {
        int num = 0;
        num = A->val;
        A->val = B->val;
        B->val = num;
    }
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp, *current, *previous;
        temp = head;
        previous = NULL;
        int index = 0;
        while (temp != NULL) {
            ++index;
            current = temp;
            if (previous != NULL && current != NULL && index % 2 == 0) {
                swapValue(previous, current);
            }
            previous = temp;
            temp = temp->next;
        }
        return head;
    }
};