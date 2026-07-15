class Solution {
public:
  /**
   * Calculates the sum of all root-to-leaf paths where each path represents a
   * binary number.
   * @param root: The root node of the binary tree
   * @return: The sum of all root-to-leaf binary numbers
   */
  int sumRootToLeaf(TreeNode *root) { return dfs(root, 0); }

private:
  /**
   * Performs depth-first search to calculate the sum of all root-to-leaf paths.
   * @param node: Current node being processed
   * @param currentValue: The accumulated binary value from root to current node
   * @return: Sum of all root-to-leaf paths starting from current node
   */
  int dfs(TreeNode *node, int currentValue) {
    // Base case: if node is null, return 0
    if (!node) {
      return 0;
    }

    // Update current binary value by shifting left and adding current node's
    // value This is equivalent to: currentValue = currentValue * 2 + node->val
    currentValue = (currentValue << 1) | node->val;

    // If current node is a leaf, return the accumulated binary value
    if (!node->left && !node->right) {
      return currentValue;
    }

    // Recursively calculate sum for left and right subtrees
    return dfs(node->left, currentValue) + dfs(node->right, currentValue);
  }
};