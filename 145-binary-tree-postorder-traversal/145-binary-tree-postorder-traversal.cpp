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
    //2 Stack Approach
    vector<int> postorderTraversal(TreeNode* root) {
    //     vector<int> ans;
    //     if(!root) return ans;
    //     stack<TreeNode *> st1,st2;
    //     st1.push(root);
    //     while(!st1.empty()){
    //         root = st1.top();
    //         st1.pop();
    //         st2.push(root);
    //         if(root->left) st1.push(root->left);
    //         if(root->right) st1.push(root->right);
    //     }
    //     while(!st2.empty()){
    //         ans.push_back(st2.top()->val);
    //         st2.pop();
    //     }
    //     return ans;
    
    
    //1 Stack Approach
    vector<int> ans;
    if(root==NULL) return ans;
    
    stack<TreeNode*> st;
    
    while(root!=NULL or !st.empty()){
        if(root!=NULL){
            st.push(root);
            root=root->left;
        }
        else{
            TreeNode *temp = st.top()->right;
            if(temp==NULL){
                temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                while(!st.empty() and temp==st.top()->right){
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->val);
                }
                
            }
            else{
                root = temp;
            }
        }
    }
    return ans;
    }
    
};