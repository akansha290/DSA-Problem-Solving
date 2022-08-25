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
        ListNode *h1=headA, *h2=headB;
        int n1=0,n2=0;
        while(h1 or h2){
            if(h1){
                n1+=1;
                h1 = h1->next;
            }
            if(h2){
                n2+=1;
                h2 = h2->next;
            }
        }
        int k = n1>n2?n1-n2:n2-n1;
        h1 = n1>n2?headA:headB;
        h2 = h1==headA?headB:headA;
        for(int i=1;i<=k;i++){
            h1 = h1->next;
        }
        while(h1!=h2 and h1 and h2){
            h1 = h1->next;
            h2 = h2->next;
        }
        if(!h1 or !h2) return NULL;
        return h1;
    }
};