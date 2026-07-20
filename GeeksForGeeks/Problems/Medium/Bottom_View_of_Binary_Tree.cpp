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
  vector<int> bottomView(Node *root) {
    // code here
    vector<int> res;
    if (!root) {
      return res;
    }
    map<int, int> bottom;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty()) {
      auto p = q.front();
      q.pop();
      Node *node = p.first;
      int x = p.second;
      bottom[x] = node->data;
      if (node->left) {
        q.push({node->left, x - 1});
      }
      if (node->right) {
        q.push({node->right, x + 1});
      }
    }
    for (auto i : bottom) {
      res.push_back(i.second);
    }
    return res;
  }
};