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


class compare
{
public:
    bool operator()(ListNode* a, ListNode* b)
    {
        return a->val > b->val;
    }
};


class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        priority_queue<ListNode*, vector<ListNode*> ,compare> minheap;

        for(int i=0; i<lists.size(); i++)
        {
            if(lists[i]!=NULL)
            minheap.push(lists[i]);
        }

        ListNode* dummy= new ListNode(0);
        ListNode* head=dummy;

        while(!minheap.empty())
        {
            head->next=minheap.top();
            minheap.pop();

            head=head->next;
        
            if(head->next)
            {
                minheap.push(head->next);
            }
        }

        return dummy->next;
    }
};