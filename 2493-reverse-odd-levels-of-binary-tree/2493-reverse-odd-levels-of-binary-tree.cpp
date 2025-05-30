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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if (!root) return NULL;
        
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;  
        
        while (!q.empty()) {
            int n = q.size();
            vector<TreeNode*> nodes;
            
            for (int i = 0; i < n; ++i) {
                TreeNode* curr = q.front();
                q.pop();
                nodes.push_back(curr);
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            
            if (level % 2 == 1) {
                int l = 0, r = nodes.size() - 1;
                while (l < r) {
                    swap(nodes[l]->val, nodes[r]->val);
                    l++;
                    r--;
                }
            }
            
            level++;
        }
        
        return root;
    }
};
