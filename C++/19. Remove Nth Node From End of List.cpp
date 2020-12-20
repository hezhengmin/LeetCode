class Solution {
   public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp, *previous, *current;
        temp = head;
        int index = 0, length = 0, m;
        while (temp != NULL) {
            temp = temp->next;
            length++;
        }
        m = length - n + 1;
        index = 0;
        temp = head;
        if (m == 1) return head->next;
        while (temp != NULL) {
            current = temp;
            ++index;
            if (index == m) {
                previous->next = current->next;
            }
            previous = temp;
            temp = temp->next;
        }
        return head;
    }
};