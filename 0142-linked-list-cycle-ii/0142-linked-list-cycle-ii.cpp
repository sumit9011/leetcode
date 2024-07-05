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
    ListNode* floydCycleDetection(ListNode * head)
    {
        if(head==NULL)
        {
            return NULL;
        }

        ListNode * fast=head;
        ListNode * slow=head;

        while(fast!=NULL && slow!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            fast=fast->next;

            slow=slow->next;

            //if cycle is present
            if(fast==slow)
            return slow;

        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {

        if(head==NULL)
        return NULL;

        ListNode * intersection=floydCycleDetection(head);

        if(intersection==NULL)
        return NULL;

        ListNode * slow=head;
        while(slow!=intersection)
        {
            slow=slow->next;
            intersection=intersection->next;
        }

        //node where slow and intersection meets is begining of cycle
        return slow;     
    }
};