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
    bool path(TreeNode* root,TreeNode *src,vector<TreeNode *> &v1){
        if(!root)
            return false;
        v1.push_back(root);
        
        if(root == src) return true;
        
        if(path(root->left,src,v1) or path(root->right,src,v1)) return true;
        
        v1.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return root;
        vector<TreeNode *> v1,v2;
        path(root,p,v1);
        path(root,q,v2);
        TreeNode *ans = new TreeNode(0);
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v2.size();j++){
                if(v1[i]==v2[j])
                    ans = v1[i];
            }
        }
        return ans;
        
    }
};