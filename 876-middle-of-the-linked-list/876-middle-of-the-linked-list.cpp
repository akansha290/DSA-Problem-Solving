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
        ListNode *dummy = new ListNode(NULL);
        dummy->next = head;
        ListNode *slow = dummy, *fast = dummy;
        while(fast->next!=NULL and fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->next;
    }
};