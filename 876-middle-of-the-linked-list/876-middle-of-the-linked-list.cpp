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
        int n=0;
        ListNode *head1=head, *head2=head;
        while(head1!=NULL){
            n++;
            head1 = head1->next;
        }
        // cout<<n;
        n = (n/2);
        for(int i=1;i<=n;i++){
            head2 = head2->next;
        }
        return head2;
    }
};