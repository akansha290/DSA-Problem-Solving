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
    ListNode *rev(ListNode* head){
        if(head==NULL)
            return head;
        ListNode *prev=NULL;
        while(head){
            ListNode *nex = head->next;
            head->next = prev;
            prev = head;
            head = nex;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
            return true;
        ListNode *dummy = new ListNode();
        dummy->next=head;
        ListNode *slow=dummy, *fast=dummy;
        
        while(fast!=NULL and fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        cout<<slow->val<<" ";
        
        ListNode *newhead = rev(slow->next);
        slow->next = newhead;
        if(slow->next) slow = slow->next;
        
        cout<<slow->val<<" ";
        
        while(slow!=NULL){
            if(head->val != slow->val)
                return false;
            head = head->next;
            slow = slow->next;
        }
        
        return true;
        
    }
};