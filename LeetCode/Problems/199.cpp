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
  vector<int> rightSideView(TreeNode *root) {
    traversal(root, 0);
    return res;
  }
  void traversal(TreeNode *node, int level) {
    if (node == nullptr) {
      return;
    }
    if (level == res.size()) {
      res.push_back(node->val);
    }
    traversal(node->right, level + 1);
    traversal(node->left, level + 1);
  }
};