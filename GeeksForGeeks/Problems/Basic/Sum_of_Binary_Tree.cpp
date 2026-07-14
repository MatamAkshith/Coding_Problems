/* Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
public:
  int sumBT(Node *root) {
    // code here
    int sum = 0;
    tsum(sum, root);
    return sum;
  }
  void tsum(int &sum, Node *node) {
    if (node == nullptr) {
      return;
    }
    sum += node->data;
    tsum(sum, node->left);
    tsum(sum, node->right);
  }
};