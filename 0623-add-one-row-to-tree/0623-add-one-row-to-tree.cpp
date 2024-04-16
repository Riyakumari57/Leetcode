class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1)
        {
            TreeNode* newNode = new TreeNode(val);
            newNode -> left = root;
            return newNode; 
        }
        
        queue<TreeNode*> q;
        q.push(root);
        int count = 0; 
        while(!q.empty()) 
        {
            int n = q.size(); 
            
            count++;
            while(n--)
            {
                TreeNode* curr = q.front();
                q.pop();
                if(count != depth - 1) 
                {
                    if(curr -> left) q.push(curr -> left);
                    if(curr -> right) q.push(curr -> right);
                }
                else 
                {
                    TreeNode* newNode = new TreeNode(val);
                    newNode -> left = curr -> left;
                    curr -> left = newNode;
                    TreeNode* newNode2 = new TreeNode(val);
                    newNode2 -> right = curr -> right;
                    curr -> right = newNode2;
                }
            }
        }

        return root; // finally return right
    }
};