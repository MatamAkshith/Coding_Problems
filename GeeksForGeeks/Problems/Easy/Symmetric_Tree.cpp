/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
public:
  bool isSymmetric(Node *root) {
    // code here
    return traversal(root->left, root->right);
  }
  bool traversal(Node *p, Node *q) {
    if (!p && !q) {
      return true;
    }
    if (!p || !q) {
      return false;
    }
    if (p->data != q->data) {
      return false;
    }
    return traversal(p->left, q->right) && traversal(p->right, q->left);
  }
};