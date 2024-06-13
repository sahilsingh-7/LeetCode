class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBSTHelper(nums, 0, nums.size() - 1);
    }

private:
    TreeNode* sortedArrayToBSTHelper(const vector<int>& nums, int left, int right) {
        if (left > right) return nullptr; // base case

        int mid = left + (right - left) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        
        node->left = sortedArrayToBSTHelper(nums, left, mid - 1);
        node->right = sortedArrayToBSTHelper(nums, mid + 1, right);
        
        return node;
    }
};
