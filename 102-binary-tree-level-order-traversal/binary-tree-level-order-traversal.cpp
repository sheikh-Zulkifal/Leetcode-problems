/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        // If the tree is empty, return an empty result
        if (!root) return {};
        
        vector<vector<int>> result;
        queue<TreeNode*> q;
        
        // Start with the root node
        q.push(root);
        
        while (!q.empty()) {
            int levelSize = q.size();  // Number of nodes in the current level
            vector<int> currentLevel;
            
            // Process all nodes for the current level
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();
                
                // Add the current node's value to the level list
                currentLevel.push_back(node->val);
                
                // Add the left child to the queue if it exists
                if (node->left) {
                    q.push(node->left);
                }
                
                // Add the right child to the queue if it exists
                if (node->right) {
                    q.push(node->right);
                }
            }
            
            // Add the current level's values to the result
            result.push_back(currentLevel);
        }
        
        return result;
    }
};
