class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> s(allowed.begin(), allowed.end());
        int count = 0;
        for(int i = 0; i<words.size(); i++){
            int flag = 1;
            for(int j=0;j<words[i].size(); j++){
                if(s.find(words[i][j]) == s.end()){
                    flag = 0;
                    break;
                }
            }
            count += flag;
        }
        return count;
    }
};