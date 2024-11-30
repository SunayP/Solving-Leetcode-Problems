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
    int height(TreeNode* n){
        if(n == NULL){return 0;}
        int lh = height(n->left);
        int rh = height(n->right);
        return 1+max(lh, rh);
    }
    int d = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){return 0;}
        int lh = height(root->left);
        int lr = height(root->right);
        d = max(d, lh+lr);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return d;
    }
};