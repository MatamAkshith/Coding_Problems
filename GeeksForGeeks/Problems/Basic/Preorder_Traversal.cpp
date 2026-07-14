/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
public:
  vector<int> preOrder(Node *root) {
    // code here
    vector<int> res;
    preorder(res, root);
    return res;
  }
  void preorder(vector<int> &res, Node *node) {
    if (node == nullptr) {
      return;
    }
    res.push_back(node->data);
    preorder(res, node->left);
    preorder(res, node->right);
  }
};