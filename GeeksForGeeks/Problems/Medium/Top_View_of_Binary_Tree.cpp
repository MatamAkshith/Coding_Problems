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
  vector<int> topView(Node *root) {
    // code here
    vector<int> res;
    map<int, int> top;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty()) {
      auto p = q.front();
      q.pop();
      Node *node = p.first;
      int x = p.second;
      if (top.find(x) == top.end()) {
        top[x] = node->data;
      }
      if (node->left) {
        q.push({node->left, x - 1});
      }
      if (node->right) {
        q.push({node->right, x + 1});
      }
    }
    for (auto i : top) {
      res.push_back(i.second);
    }
    return res;
  }
};