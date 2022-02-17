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
    int calc(ListNode *head){
        int cnt=0;
        while(head){
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL or headB==NULL) return NULL;
        ListNode *ta=headA, *tb = headB;
        int m = calc(ta);
        int n = calc(tb);
        ListNode *a = m>=n?headA:headB;
        ListNode *b = m<n?headA:headB;
        int cnt = 1;
        int diff = abs(m-n);
        // cout<<diff<<" "<<a->val<<" "<<b->val;
        while(cnt<=diff){
            a = a->next;
            cnt+=1;
        }
        // cout<<"\n"<<a->val<<" "<<b->val;
        while(a!=b and a and b){
            a = a->next;
            b = b->next;
        }
        if(a==NULL or b==NULL) return NULL;
        return a;
    }
};