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
    int findd(TreeNode* root,int& maxx)
    {
        
        if(root==NULL) return 0;
        int lh = findd(root->left,maxx);
         int rh = findd(root->right,maxx);
        maxx = max(lh+rh,maxx);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root)
    {
        int maxx = 0;
        findd(root,maxx);
        return maxx;
    }
    
};