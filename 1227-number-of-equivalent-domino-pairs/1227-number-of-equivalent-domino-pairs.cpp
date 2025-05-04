class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<vector<int>, int> mp;
        int pairs = 0;
        for(int i=0; i<dominoes.size(); i++){
           if(dominoes[i][0] > dominoes[i][1]){
            swap(dominoes[i][0], dominoes[i][1]);
           }
            if(mp[dominoes[i]] > 0){
                pairs += mp[dominoes[i]];
            }
            mp[dominoes[i]]++;
        }
        return pairs;
    }
};