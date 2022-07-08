/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *insert(int data, ListNode *head)
    {
        if (head == NULL)
        {
            ListNode *test = new ListNode(data);
            return test;
        }
        ListNode *temp = head;
        ListNode *node = new ListNode(data);
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node;
        return head;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *head = NULL;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry != 0)
        {
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            int data = x + y + carry;
            carry = data / 10;
            head = insert(data % 10, head);
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return head;
    }
};