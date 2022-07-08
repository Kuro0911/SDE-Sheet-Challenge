/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        map<ListNode *, int> m;
        ListNode *node = headA;
        while (node != NULL)
        {
            m[node] = 1;
            node = node->next;
        }
        node = headB;
        while (node != NULL)
        {
            if (m[node] == 1)
                return node;
            node = node->next;
        }

        return NULL;
    }
};