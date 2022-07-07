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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL or headB==NULL) return NULL;
        
        int l1=0,l2=0;
        ListNode *a=headA, *b=headB;
        
        while(a){
            l1+=1;
            a = a->next;
        }
        
        while(b){
            l2+=1;
            b = b->next;
        }
        
        int diff=0;
        if(l1==l2)
            diff=0;
        else
            diff = l1>l2?l1-l2:l2-l1;
        
        a = l1>l2?headA:headB;
        b = l1>l2?headB:headA;
        
        // cout<<a->val<<" "<<b->val<<endl;
        
        for(int i=1;i<=diff;i++)
            a = a->next;
        
        // cout<<a->val<<" "<<b->val<<endl;
        
        while(a!=NULL and b!=NULL){
            if(a==b) return a;
            a = a->next;
            b = b->next;
        }
        return NULL;
    }
};