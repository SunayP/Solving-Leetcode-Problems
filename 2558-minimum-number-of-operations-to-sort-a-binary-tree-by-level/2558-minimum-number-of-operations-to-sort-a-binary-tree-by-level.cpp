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
    int swapTosort(vector<int> &v){
        vector<pair<int, int>> vp;
        int n = v.size();
        int sw = 0;
        for(int i=0; i<n; i++){
            vp.push_back({v[i], i});
        }
        sort(vp.begin(), vp.end(), [](pair<int, int> &a, pair<int, int> &b){
            return a.first < b.first;
        });
        int i=0;
        while(i<n){
            if(vp[i].second != i){
                swap(vp[i], vp[vp[i].second]);
                sw++;
            }
            else{
                i++;
            }
        }
        return sw;
    }
    int minimumOperations(TreeNode* root) {
        int swaps = 0;
        if(!root) return NULL;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> v;
            for(int i=0; i<n; i++){
                TreeNode* d = q.front();
                q.pop();
                v.push_back(d->val);
                if(d->left){q.push(d->left);}
                if(d->right){q.push(d->right);}
            }
            swaps += swapTosort(v);
        }
        return swaps;
    }
};