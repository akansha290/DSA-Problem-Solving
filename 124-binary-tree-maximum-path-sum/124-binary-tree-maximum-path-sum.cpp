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
    int maxPathSum(TreeNode* root) {
        int maxs = INT_MIN;
        calc(root,maxs);
        return maxs;
    }
    
    int calc(TreeNode *root, int &maxs){
        if(root==NULL)
            return 0;
        int left = max(0,calc(root->left,maxs));
        int right = max(0,calc(root->right,maxs));
        
        maxs = max(maxs,root->val+left+right);
        return root->val + max(left,right);
    }
};