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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(k==0 or head==NULL or head->next==NULL)
            return head;
        
        ListNode* curr=head;
        int len = 1;
        while(curr->next and ++len)
            curr = curr->next;
        // cout<<len;
        
        k = k%len;
        int turns = len-k;
        curr->next=head;
        while(curr->next and turns--)
            curr=curr->next;
        head = curr->next;
        curr->next=NULL;
        return head;
    }
};