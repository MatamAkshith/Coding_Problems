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
  int maxi = 0;
  int height(Node *root) {
    // code here
    height(root, 0);
    return maxi;
  }
  void height(Node *node, int level) {
    if (!node) {
      return;
    }
    maxi = max(maxi, level);
    height(node->left, level + 1);
    height(node->right, level + 1);
  }
};