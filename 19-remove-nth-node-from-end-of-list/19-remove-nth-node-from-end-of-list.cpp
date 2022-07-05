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
        int length = 0;
        ListNode *head1 = head, *head2 = head;
        while(head1!=NULL){
            length++;
            head1 = head1->next;
        }
        // cout<<length<<endl;
        if(n==length) return head->next;
        for(int i=1;i<(length-n);i++){
            head2 = head2->next; 
        }
        ListNode *node = head2->next;
        head2->next = node->next;
        delete(node);
        return head;
    }
};