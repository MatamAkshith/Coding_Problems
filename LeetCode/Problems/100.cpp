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
// class Solution {
// public:
//   bool isSameTree(TreeNode *p, TreeNode *q) {
//     bool flag = traversal(p, q);
//     return flag;
//   }
//   bool traversal(TreeNode *p, TreeNode *q) {
//     if (!p && !q) {
//       return true;
//     }
//     if (!p || !q) {
//       return false;
//     }
//     if (p->val != q->val) {
//       return false;
//     }
//     return traversal(p->left, q->left) && traversal(p->right, q->right);
//   }
// };
class Solution {
public:
  bool flag;
  bool isSameTree(TreeNode *p, TreeNode *q) {
    flag = traversal(p, q);
    return flag;
  }
  bool traversal(TreeNode *p, TreeNode *q) {
    if (!p && !q) {
      return true;
    }
    if (!p || !q) {
      return false;
    }
    flag = traversal(p->left, q->left);
    if (!flag) {
      return false;
    }
    if (p->val != q->val) {
      return false;
    }
    flag = traversal(p->right, q->right);
    if (!flag) {
      return false;
    }
    return flag;
  }
};