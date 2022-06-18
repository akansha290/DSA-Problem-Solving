/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int calcsum(TreeNode* root, int& maxs){
        if(!root) return 0;
        int leftsum  = max(0,calcsum(root->left,maxs));
        int rightsum = max(0,calcsum(root->right,maxs));
        
        maxs = max(maxs,leftsum+rightsum+root->val);
        return root->val + max(leftsum,rightsum);
           
    }
    int maxPathSum(TreeNode* root) {
        int maxs = INT_MIN;
        calcsum(root,maxs);
        return maxs;
    }
};