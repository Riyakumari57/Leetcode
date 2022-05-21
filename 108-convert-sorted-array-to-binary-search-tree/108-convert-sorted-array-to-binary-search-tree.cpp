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
    int x = 0;
    TreeNode* sortedArrayToBST(vector<int>& num) 
    {
        if(num.size()==0) 
            return NULL;
        if(num.size()==1)
        {
            return new TreeNode(num[0]);
        }
        int mid = num.size()/2;
        TreeNode* root = new TreeNode(num[mid]);
        vector<int> leftInts(num.begin(), num.begin()+mid);
        vector<int> rightInts(num.begin()+mid+1, num.end());
        
        for(int i=0;i< leftInts.size();i++)
        {
            cout<< leftInts[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i< rightInts.size();i++)
        {
            cout<< rightInts[i]<<" ";
        }
        cout<<endl;
        cout<<" x is "<<++x<<endl<<endl;
        root->left = sortedArrayToBST(leftInts);
       // cout<<root->left->val<<endl;
        root->right = sortedArrayToBST(rightInts);
         //  cout<<root->right->val<<endl;
        
        return root;
    }
};