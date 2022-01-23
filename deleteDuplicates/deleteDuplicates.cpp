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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* i;
        i=head;
        while(i!=nullptr)
        {
            if(i->next!=NULL && i->val==i->next->val)
               {i->next=i->next->next;continue;}
            i=i->next;
        }
        return head;

    }
};
