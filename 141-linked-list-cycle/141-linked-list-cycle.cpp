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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *> hash;
        if(head==NULL or head->next==NULL){
            return false;
        }
        while(head!=NULL){
            if(hash.find(head)!=hash.end()){
                return true;
            }
            hash.insert(head);
            head=head->next;
        }
        return false;
    }
};