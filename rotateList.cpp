/*
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]
*/

class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        ListNode*p = head;
        int count = 1;
        if(!head || k == 0) return head;
        while(p->next != NULL)
        {
            count++;
            p = p->next;
        }
        p->next = head;
        
        k = k % count;
        k = count - k;
        while(k > 0)
        {
            p = p->next;
            k--;
        }
        head = p->next;
        p->next = NULL;

        return head;
    }
};