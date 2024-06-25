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
    int sum = 0;
    void calc(TreeNode *root){
        
        if(!root) {
            return;
        }
        calc(root->right);
        sum += root->val;
        root->val = sum;
        calc(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        calc(root);
        return root;
    }
};
