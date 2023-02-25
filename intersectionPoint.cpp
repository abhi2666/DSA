/*
Apporach --> difference in the length is used
1. Traverse the larger array upto abs(length l1 - length l2) times forward
2. Now start traversing both the lists together..wherever they meet will give the 
answer.
*/

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {

        if (headA == NULL || headB == NULL)
            return NULL;

        ListNode *ptr1 = headA; // pointing to the address they hold
        ListNode *ptr2 = headB;

        int count1 = length(headA);
        int count2 = length(headB);
        int diff = abs(count1 - count2);
        // find longer list
        if (count1 > count2)
        {
            while (diff--)
            {
                ptr1 = ptr1->next;
            }
        }
        else
        {
            while (diff--)
            {
                ptr2 = ptr2->next;
            }
        }

        while(ptr1 != NULL || ptr2 != NULL)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            if(ptr1 == ptr2) return ptr1;
        }

        return ptr1;

    }

    int length(ListNode *a)
    {
        int c = 0;
        while (a)
        {
            a = a->next;
            c++;
        }
        return c;
    }
};