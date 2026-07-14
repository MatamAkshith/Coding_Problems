/* Node Structure
class Node {
public:
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    int getSize(Node* root) {
        // code here
        int count = 0;
        tsize(count, root);
        return count;
    }
    void tsize(int &count, Node * node){
        if(node == nullptr){
            return;
        }
        count++;
        tsize(count, node->left);
        tsize(count, node->right);
    }
};