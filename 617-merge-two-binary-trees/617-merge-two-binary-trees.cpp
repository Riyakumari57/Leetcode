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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        //  if (root1 == NULL and root2 == NULL)
        //     return NULL;
        // TreeNode *node = new TreeNode();
        // if (root1)
        //     node->val += root1->val;
        // if (root2)
        //     node->val += root2->val;
        // node->left = mergeTrees(root1 ? root1->left : NULL, root2 ? root2->left : NULL);
        // node->right = mergeTrees(root1 ? root1->right : NULL, root2 ? root2->right : NULL);
        // return node;
        
        
        if(root1==NULL && root2==NULL)
            return NULL;
        TreeNode *node = new TreeNode();
        if(root1)
            node->val+=root1->val;
        if(root2)
            node->val+=root2->val;
        node->left =  mergeTrees(root1? root1->left :NULL , root2? root2->left:NULL);
        node->right = mergeTrees(root1 ? root1->right : NULL, root2 ? root2->right : NULL);
         return node;
        
        
    }
}; 