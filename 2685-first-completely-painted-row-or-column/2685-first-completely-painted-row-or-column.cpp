class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {\
        int m = mat.size(), n= mat[0].size();
        vector<pair<int, int>> process(m*n);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                process[mat[i][j]-1] = {i, j};
            }
        }
        vector<int> row(m);
        vector<int> col(n);
        for(int i=0; i<arr.size(); i++){
            row[process[arr[i]-1].first]++;
            col[process[arr[i]-1].second]++;
            if(row[process[arr[i]-1].first] == n || col[process[arr[i]-1].second] == m){
                return i;
            }
        }
        return -1;
    }
};