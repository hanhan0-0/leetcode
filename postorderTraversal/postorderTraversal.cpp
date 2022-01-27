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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        hou(root,ans);
        return ans;
    }
    void hou(TreeNode*root,vector<int>&ans)
    {
        if(root==nullptr)
            return;
        
        hou(root->left,ans);
        hou(root->right,ans);
        ans.push_back(root->val);

    }
};
