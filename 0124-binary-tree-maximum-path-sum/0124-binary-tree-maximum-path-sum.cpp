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
    int level(TreeNode* n, int &maxi){
        if(n == NULL){return 0;}
        int left = max(0, level(n->left, maxi));
        int right = max(0, level(n->right, maxi));
        maxi = max(maxi, n->val+left+right);
        return n->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        level(root, maxi);
        return maxi; 
    }
};