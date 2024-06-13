class Solution {
public:
    bool check(TreeNode* l ,TreeNode* r){
        if(!l && !r) return true;
        if(!l || !r) return false;
        if(l->val != r->val) return false;
        return check(l->left,r->right) & check(l->right,r->left);
    }
    bool isSymmetric(TreeNode* root) {
        return check(root->left,root->right);
    }
};
