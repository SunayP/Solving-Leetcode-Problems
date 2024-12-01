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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL){return ans;}
        queue<TreeNode* >q;
        q.push(root);
        bool rev = false;
        while(!q.empty()){
            vector<int> level;
            int n = q.size();
            for(int i=0; i<n; i++){
                TreeNode* d = q.front();
                q.pop();
                level.push_back(d->val);
                if(d->left != NULL){q.push(d->left);}
                if(d->right != NULL){q.push(d->right);}
            }
            if(rev){reverse(level.begin(), level.end());}
            ans.push_back(level);
            rev ^= true;
        }
        return ans;
    }
};