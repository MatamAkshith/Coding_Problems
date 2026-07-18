/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
public:
  vector<int> res;
  vector<int> inOrder(Node *root) {
    // code here
    traversal(root);
    return res;
  }
  void traversal(Node *node) {
    if (!node) {
      return;
    }
    traversal(node->left);
    res.push_back(node->data);
    traversal(node->right);
  }
};