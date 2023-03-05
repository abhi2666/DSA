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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // we have to return the pointer to final added list
        ListNode* Dummy = new ListNode();
        ListNode * temp = Dummy;
        int carry, sum = 0;

        while(l1 != NULL || l2!= NULL || carry)
        {
            sum = 0; //we will have to calculate fresh sum every time
            sum += carry;
            if(l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum/10;
            //creating node and giving the connectivity
            ListNode* node = new ListNode(sum%10);
            temp->next = node;
            temp = temp->next;

        }
    }
};