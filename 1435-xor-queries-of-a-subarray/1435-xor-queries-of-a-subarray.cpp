class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        map<int, int> mp;
        int y = 0;
        vector<int> ans;
        for(int i=0; i<arr.size(); i++){
            y ^= arr[i];
            mp[i] = y;
        }
        for(int i=0; i<queries.size(); i++){
            y = 0;
            if(queries[i][0] == 0){
                y ^= mp[queries[i][1]];
            }
            else{
                y = mp[queries[i][1]];
                y ^= mp[queries[i][0] - 1];
            }
            ans.push_back(y);
        }
        return ans;
    }
};