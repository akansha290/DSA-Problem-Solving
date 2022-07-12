/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return head;
        
        Node *curr = head, *front = head;
        while(curr){
            front = curr->next;
            Node *node = new Node(curr->val);
            curr->next = node;
            node->next = front;
            curr = front;
        }
        
        curr = head;
        while(curr){
            if(curr->random!=NULL){
                curr->next->random =curr->random->next;
            }
            curr = curr->next->next;
        }
        
        Node *dummy = new Node(0);
        Node *newHead = dummy;
        curr = head;
        while(curr!=NULL){
            front = curr->next->next;
            dummy->next = curr->next;
            curr->next = front;
            dummy = dummy->next;
            curr = front;
        }
        
        return newHead->next;
    }
};