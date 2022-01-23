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
    vector<int> inorderTraversal(TreeNode* root) {
       
        vector<int>a;
        zhong(root,a);
        return a;


    }
    void zhong(TreeNode* root,vector<int>&a) 
    {
         if(root==nullptr)
            return ;
         zhong(root->left,a);
         a.push_back(root->val);
         zhong(root->right,a);
    }
};
