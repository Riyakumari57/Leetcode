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
    void foo(TreeNode* root , int n , vector<int>&v)
    {
        if(root==NULL)
            return;
        if(n==v.size())v.push_back(root->val);
          foo(root->right , n+1 , v);
          foo(root->left , n+1, v);
    }
    vector<int> rightSideView(TreeNode* root)
    {
        vector<int>v;
        foo(root , 0 , v);
        return v;
    }
};