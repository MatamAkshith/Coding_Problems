/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
public:
  vector<int> res;
  vector<int> leftView(Node *root) {
    // code here
    traversal(root, 0);
    return res;
  }
  void traversal(Node *node, int level) {
    if (node == nullptr) {
      return;
    }
    if (level == res.size()) {
      res.push_back(node->data);
    }
    traversal(node->left, level + 1);
    traversal(node->right, level + 1);
  }
};