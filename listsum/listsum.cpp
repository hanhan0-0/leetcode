class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *i;
        ListNode *j;
        ListNode *p;
        i=l1;j=l2;
        ListNode *a=new ListNode(0);//求得的链表
        p=a;
        int b=0;//进位
        while(i!=NULL || j!=NULL)
        {
            if(i!=NULL && j!=NULL)
             {
                 if(i->val+j->val+b>=10)
                 {
                     a->next=new ListNode(i->val+j->val-10+b);
                     b=1;
                 }
                 else if(i->val+j->val+b<10)
                 {
                     a->next=new ListNode(i->val+j->val+b);
                     b=0;
                 }

             }
             else if(i==NULL && j!=NULL)
             {
                if(j->val+b>=10)
                {  
                    a->next=new ListNode(j->val+b-10);
                     b=1;
                }
                else
                {
                     a->next=new ListNode(j->val+b); 
                     b=0  ;
                }
             }
             else if(i!=NULL && j==NULL)
             {
                if(i->val+b>=10)
                {  
                    a->next=new ListNode(i->val+b-10);
                     b=1;
                }
                else
                {
                     a->next=new ListNode(i->val+b); 
                     b=0  ;
                }
             }
             if(i!=NULL)
                 i=i->next;
            if(j!=NULL)
                 j=j->next;
             a=a->next;
        }
        if(b==1)
            a->next=new ListNode(b);
    return p->next;
    }
};
