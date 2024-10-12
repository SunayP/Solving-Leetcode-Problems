class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<pair<int, bool>> v;
        int group=INT_MIN;
        for(int i=0; i<intervals.size(); i++){
            v.push_back({intervals[i][0], true});
        }
        for(int i=0; i<intervals.size(); i++){
            v.push_back({intervals[i][1]+1, false});
        }
        sort(v.begin(), v.end(), [](const pair<int, bool> &a, const pair<int, bool> &b){
            if(a.first == b.first){
                if(a.first){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                return a.first<b.first;
            }
        });
        int curr = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i].second){
                curr++;
            }
            else{
                curr--;
            }
            group = max(group, curr);
        }
        return group;
    }
};