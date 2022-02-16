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
        int len=0;
        ListNode* temp = head;
        while(temp){
            len+=1;
            temp=temp->next;
        }
        if(len==n){
            ListNode* node = head;
            head = head->next;
            delete(node);
        }
        else{
            temp=head;
            int cnt = 0;
            while(temp and cnt<(len-n-1)){
                temp = temp->next;
                cnt++;
            }
            cout<<temp->val;
            ListNode *node = temp->next;
            temp-> next = temp->next->next;
            delete(node);
        }
        return head;
    }
};