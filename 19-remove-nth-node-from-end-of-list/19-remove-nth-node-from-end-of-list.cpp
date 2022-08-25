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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode *curr = head;
        while(curr){
            len+=1;
            curr = curr->next;
        }
        len-=n;
        curr=head;
        if(!len) return head->next;
        for(int i=1;i<len;i++){
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};