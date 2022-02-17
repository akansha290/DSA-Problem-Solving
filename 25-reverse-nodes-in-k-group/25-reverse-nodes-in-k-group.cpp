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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL or k==1) return head;
        
        ListNode *dummy = new ListNode();
        dummy->next = head;
        
        ListNode *prev=dummy, *curr=dummy, *nex=dummy;
        
        int n=0;
        while(curr->next!=NULL){
            n+=1;
            curr = curr->next;
        }
        
        while(n>=k){
            curr = prev->next;
            nex = curr->next;
            for(int i=1;i<k;i++){
                curr->next = nex->next;
                nex->next = prev->next;
                prev->next = nex;
                nex = curr->next;
            }
            prev = curr;
            n-=k;
        }
        return dummy->next;
        
    }
};