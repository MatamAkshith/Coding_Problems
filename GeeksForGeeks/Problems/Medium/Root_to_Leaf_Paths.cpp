/* Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
public:
  vector<vector<int>> res;
  vector<int> level;
  vector<vector<int>> paths(Node *root) {
    // code here
    traversal(root);
    return res;
  }
  void traversal(Node *node) {
    if (!node) {
      return;
    }
    level.push_back(node->data);
    if (!node->left && !node->right) {
      res.push_back(level);
    } else {
      traversal(node->left);
      traversal(node->right);
    }
    level.pop_back();
  }
};