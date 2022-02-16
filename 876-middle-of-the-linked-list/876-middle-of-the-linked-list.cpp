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
        if(head==NULL or head->next==NULL) return head;
        int n=0;
        ListNode* temp = head;
        while(temp){
            n+=1;
            temp=temp->next;
        }
        int mid = n&1?(n/2):(n/2);
        cout<<n<<" "<<mid;
        int i=0;
        while(i<mid){
            head=head->next;
            i++;
        }
        return head;
    }
};