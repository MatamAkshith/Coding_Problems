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
  int maxi = 0;
  int maxDepth(TreeNode *root) {
    traversal(root, 1);
    return maxi;
  }
  void traversal(TreeNode *node, int level) {
    if (!node) {
      return;
    }
    maxi = max(maxi, level);
    traversal(node->left, level + 1);
    traversal(node->right, level + 1);
  }
};