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

    void fill_map(map<TreeNode*, vector<int>> &mp, TreeNode* root){
        if(root == NULL){return;}
        if(root->left){
            mp[root->left] = {mp[root][0]+1, mp[root][1]-1};
        }
        if(root->right){
            mp[root->right] =  {mp[root][0]+1, mp[root][1]+1};
        }
        fill_map(mp, root->left);
        fill_map(mp, root->right);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<TreeNode*, vector<int>> mp;
        if(root == NULL){return ans;}
        mp[root] = {0,0};
        fill_map(mp, root);
        vector<pair<TreeNode*, vector<int>>> vp(mp.begin(), mp.end());
        sort(vp.begin(), vp.end(), [](pair<TreeNode*, vector<int>> &fir,pair<TreeNode*, vector<int>> &sec){
            if(fir.second[1] == sec.second[1]){
                if(fir.second[0] == sec.second[0]){
                    return fir.first->val < sec.first->val;
                }
                return fir.second[0] < sec.second[0];
            }
            return fir.second[1] < sec.second[1];
        });
        int i=0;
        while(i<vp.size()){
            vector<int> v;
            v.push_back(vp[i].first->val);
            i++;
            while(i<vp.size() && vp[i].second[1] == vp[i-1].second[1]){
                v.push_back(vp[i].first->val);
                i++;
            }
            ans.push_back(v);
        }
        return ans;
    }
};