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
    int level(TreeNode* n){
        if(n == NULL){return 0;}

        int lh = level(n->left);
        int lr = level(n->right);

        return 1+max(lh, lr);
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL){return true;}
        if(abs(level(root->left)-level(root->right)) > 1){
            return false;
        }
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        if(!left || !right){
            return false;
        }

        return true;
    }
};