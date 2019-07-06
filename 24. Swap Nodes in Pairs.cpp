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
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp, *current, *previous, *last;
        temp = head;
        previous = NULL;
        int index = 0;
        while (temp != NULL) {
            ++index;
            current = temp;
            last = temp->next;
            if (current != NULL && last != NULL && index & 1) {
                if (previous != NULL) {
                    //printf("index %d previous %d current %d last %d\n", index, previous->val, current->val, last->val);
                    previous->next = last;
                    current->next = last->next;
                    last->next = current;
                    temp = last;
                } else {
                    current->next = last->next;
                    last->next = current;
                    temp = last;
                    head = last;
                }
            }
            previous = temp;
            temp = temp->next;
        }
        return head;
    }
};