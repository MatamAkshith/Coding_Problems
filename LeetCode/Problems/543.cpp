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
  int height(TreeNode *node) {
    if (!node) {
      return -1;
    }
    return 1 + max(height(node->left), height(node->right));
  }
  int diameterOfBinaryTree(TreeNode *root) {
    if (!root) {
      return 0;
    }
    int rootd = height(root->left) + height(root->right) + 2;
    int leftd = diameterOfBinaryTree(root->left);
    int rightd = diameterOfBinaryTree(root->right);
    return max(rootd, max(leftd, rightd));
  }
};