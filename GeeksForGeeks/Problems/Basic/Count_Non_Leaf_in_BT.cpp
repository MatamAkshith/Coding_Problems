/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
public:
  int countNonLeafNodes(Node *root) {
    // Code here
    int count = 0;
    leaves(count, root);
    return count;
  }
  void leaves(int &count, Node *node) {
    if (node == nullptr) {
      return;
    }
    if (node->left != nullptr || node->right != nullptr) {
      count++;
    }
    leaves(count, node->left);
    leaves(count, node->right);
  }
};