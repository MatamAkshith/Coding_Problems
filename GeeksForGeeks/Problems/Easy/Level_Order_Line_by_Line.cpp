/* A binary tree Node

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
 */
class Solution {
public:
  vector<vector<int>> levelOrder(Node *root) {
    // code here
    vector<vector<int>> res;
    if (!root) {
      return res;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty()) {
      int n = q.size();
      vector<int> level;
      for (int i = 0; i < n; i++) {
        Node *node = q.front();
        q.pop();
        level.push_back(node->data);
        if (node->left) {
          q.push(node->left);
        }
        if (node->right) {
          q.push(node->right);
        }
      }
      res.push_back(level);
    }
    return res;
  }
};