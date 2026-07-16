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
  bool hasPathSum(TreeNode *root, int targetSum) {
    return path(root, targetSum, 0);
  }
  bool path(TreeNode *node, int targetSum, int currSum) {
    if (!node) {
      return false;
    }
    currSum += node->val;
    if (!node->left && !node->right) {
      if (currSum == targetSum) {
        return true;
      } else {
        return false;
      }
    }
    return path(node->left, targetSum, currSum) ||
           path(node->right, targetSum, currSum);
  }
};