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
    ListNode* reverseList(ListNode* head) {
        ListNode *i=head;
        
        vector<int> ans;
        while(i!=NULL)
        {
            ans.push_back(i->val);
            i=i->next;
        }
        i=head;
        int j=0;
        for(int j=ans.size()-1;j>-1;j--)
        {
            i->val=ans[j];
            i=i->next;
        }
        return head;

    }
};
