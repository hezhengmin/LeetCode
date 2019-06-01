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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1 = 0, num2 = 0, tmp = 0;
        ListNode *ans = new ListNode(0);
        ListNode *ptr = ans;
        ListNode *ptr1 = l1;
        ListNode *ptr2 = l2;
        for (int i = ptr1->val, j = ptr2->val;;)
        {
            ptr->val += tmp;
            num1 = (i + j) % 10;
            num2 = (i + j) / 10;
            tmp = num2;
            num2 = 0;
            ptr->val += num1;
            if (ptr->val >= 10)
            {
                tmp += ptr->val / 10;
                ptr->val = ptr->val % 10;
            }
            //printf("%d %d %d\n", i, j, i + j);
            if (ptr1->next == nullptr && ptr2->next == nullptr)
            {
                if (tmp)
                {
                    ptr->next = new ListNode(0);
                    ptr->next->val = tmp;
                    ptr->next->next = nullptr;
                }
                break;
            }
            else
            {
                ptr->next = new ListNode(0);
                ptr = ptr->next;
            }
            if (ptr1->next != nullptr)
                ptr1 = ptr1->next, i = ptr1->val;
            else
                i = 0;

            if (ptr2->next != nullptr)
                ptr2 = ptr2->next, j = ptr2->val;
            else
                j = 0;
        }
        return ans;
    }
};