/* Structure of tree node
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
  int getLevel(struct Node *node, int target) {
    // code here
    int level = 1;
    if (!node) {
      return 0;
    }
    queue<Node *> q;
    q.push(node);
    while (!q.empty()) {
      int n = q.size();
      for (int i = 0; i < n; i++) {
        Node *noden = q.front();
        q.pop();
        if (noden->data == target) {
          return level;
        }
        if (noden->left) {
          q.push(noden->left);
        }
        if (noden->right) {
          q.push(noden->right);
        }
      }
      level++;
    }
    return 0;
  }
};