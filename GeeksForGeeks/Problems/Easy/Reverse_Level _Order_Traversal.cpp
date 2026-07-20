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
  vector<int> reverseLevelOrder(Node *root) {
    // code here
    vector<int> res;
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
      int m = level.size();
      for (int i = 0; i < m; i++) {
        res.push_back(level[i]);
      }
      reverse(res.begin(), res.end());
      reverse(res.begin(), res.begin() + m);
      reverse(res.begin() + m, res.end());
    }
    return res;
  }
};