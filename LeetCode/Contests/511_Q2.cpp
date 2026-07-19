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
  int res = 0;
  int countDominantNodes(TreeNode *root) {
    traversal(root);
    return res;
  }
  int traversal(TreeNode *node) {
    if (!node) {
      return INT_MIN;
    }
    int left = traversal(node->left);
    int right = traversal(node->right);
    int curr = max(node->val, max(left, right));
    if (node->val == curr) {
      res++;
    }
    return curr;
  }
};
©leetcode