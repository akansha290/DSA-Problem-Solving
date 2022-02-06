/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return root;
        int x = root->val, a=p->val, b=q->val;
        if(x==a or x==b){
            return root;
        }
        if(x>a and x>b)
            return lowestCommonAncestor(root->left,p,q);
        if(x<a and x<b)
            return lowestCommonAncestor(root->right,p,q);
        return root;
    }
};