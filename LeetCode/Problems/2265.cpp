/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
   public:
    struct state {
        int sum;
        int count;
        int result;
    };
    state traversal(TreeNode* node) {
        if (!node) {
            return {0, 0, 0};
        }
        state left = traversal(node->left);
        state right = traversal(node->right);
        int sub_sum = left.sum + right.sum + node->val;
        int sub_count = left.count + right.count + 1;
        int result = left.result + right.result;
        if (sub_count > 0 && node->val == (sub_sum / sub_count)) {
            result++;
        }
        return {sub_sum, sub_count, result};
    }
    int averageOfSubtree(TreeNode* root) {
        state res = traversal(root);
        return res.result;
    }
};