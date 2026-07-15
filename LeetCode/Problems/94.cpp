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
  vector<int> res;
  vector<int> inorderTraversal(TreeNode *root) {
    traversal(root);
    return res;
  }
  void traversal(TreeNode *node) {
    if (!node) {
      return;
    }
    traversal(node->left);
    res.push_back(node->val);
    traversal(node->right);
  }
};