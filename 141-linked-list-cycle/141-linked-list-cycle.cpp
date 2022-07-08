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
        unordered_map<ListNode *,int> mpp;
        ListNode *a = head;
        while(a!=NULL){
            if(mpp.find(a)!=mpp.end()){
                return true;
            }
            else{
                mpp[a]=1;
            }
            a = a->next;
        }
        return false;
    }
};