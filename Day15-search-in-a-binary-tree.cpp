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
    TreeNode * ans = NULL;
    TreeNode* searchBST(TreeNode* root, int val) 
    {
        if (root==NULL || root->val==val)
            ans=root;
        else if (root->val<val)
        {
            //cout<<"going right\n";
            ans=searchBST(root->right, val);
        }
        else
        {
            //cout<<"going left\n";
            ans=searchBST(root->left, val);
        }
        return ans;
        
    }
};
