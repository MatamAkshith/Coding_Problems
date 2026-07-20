/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
public:
  vector<int> left, leaf, right;
  vector<int> boundaryTraversal(Node *root) {
    // code here
    left.clear();
    leaf.clear();
    right.clear();
    vector<int> res;
    if (!root) {
      return res;
    }
    res.push_back(root->data);
    if (root->left) {
      leftnode(root->left);
    }
    leafnode(root->left);
    leafnode(root->right);
    if (root->right) {
      rightnode(root->right);
    }
    int a = left.size(), b = leaf.size(), c = right.size();
    for (int i = 0; i < a; i++) {
      res.push_back(left[i]);
    }
    for (int i = 0; i < b; i++) {
      res.push_back(leaf[i]);
    }
    reverse(right.begin(), right.end());
    for (int i = 0; i < c; i++) {
      res.push_back(right[i]);
    }
    return res;
  }
  void leftnode(Node *node) {
    if (!node->left && !node->right) {
      return;
    }
    left.push_back(node->data);
    if (node->left) {
      leftnode(node->left);
    } else {
      leftnode(node->right);
    }
  }
  void leafnode(Node *node) {
    if (!node) {
      return;
    }
    leafnode(node->left);
    if (!node->left && !node->right) {
      leaf.push_back(node->data);
    }
    leafnode(node->right);
  }
  void rightnode(Node *node) {
    if (!node->left && !node->right) {
      return;
    }
    right.push_back(node->data);
    if (node->right) {
      rightnode(node->right);
    } else {
      rightnode(node->left);
    }
  }
};