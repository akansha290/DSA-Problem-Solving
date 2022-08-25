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
    ListNode* middleNode(ListNode* head) {
        if(!head) return NULL;
        int n=0;
        ListNode *curr = head;
        while(curr){
            n+=1;
            curr = curr->next;
        }
        int mid = n/2;
        for(int i=1;i<=mid;i++){
            head = head->next;
        }
        return head;
    }
};