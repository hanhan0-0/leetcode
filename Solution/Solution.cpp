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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* s=nullptr;
        if(list1==nullptr&&list2==nullptr)
            return s;
        if(list1==nullptr)
            return list2;
        if(list2==nullptr) 
            return list1;
        ListNode* i;
        ListNode* j;
        ListNode* s2;
        ListNode* s1=new ListNode();
        s2=s1;
        i=list1;
        j=list2;
        while(i!=NULL && j!=NULL)   
        {
            if(i->val<j->val)
                {
                    s1->next=new ListNode(i->val);
                    i=i->next;
                }
            else
               {
                    s1->next=new ListNode(j->val);
                    j=j->next;
               }
            s1=s1->next;
        }
        if(i==nullptr&&j!=nullptr)
            s1->next=j;
        if(j==nullptr&&i!=nullptr)
            s1->next=i;
        return s2->next;
    }
};
