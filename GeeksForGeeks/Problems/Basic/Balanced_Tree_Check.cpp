/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
public:
  bool isBalanced(Node *root) {
    // code here
    return height(root) != -1;
  }
  int height(Node *node) {
    if (!node) {
      return 0;
    }
    int left = height(node->left);
    if (left == -1) {
      return -1;
    }
    int right = height(node->right);
    if (right == -1) {
      return -1;
    }
    if (abs(left - right) > 1) {
      return -1;
    }
    return 1 + max(left, right);
  }
};