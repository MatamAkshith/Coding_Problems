/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to
complete this function */
class Solution {
public:
  bool hasPathSum(Node *root, int target) {
    // Your code here
    int sum = 0;
    return traversal(root, sum, target);
  }
  bool traversal(Node *node, int sum, int target) {
    if (!node) {
      return false;
    }
    sum += node->data;
    if (!node->left && !node->right) {
      if (sum == target) {
        return true;
      }
    }
    return traversal(node->left, sum, target) ||
           traversal(node->right, sum, target);
  }
};