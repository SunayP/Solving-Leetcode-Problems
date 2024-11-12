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
    void inorder_t(TreeNode* root){
        if(root == NULL){
            return;
        }
        inorder_t(root->left);
        inorder.push_back(root->val);
        inorder_t(root->right);
    }
    vector<int> inorder;
    vector<int> inorderTraversal(TreeNode* root) {
        inorder_t(root);
        return inorder;
    }
};