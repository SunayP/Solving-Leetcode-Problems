class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end(), [](vector<int> &a, vector<int> &b){
            return a[0]<b[0];
        });
        vector<vector<int>> non_over;
        non_over.push_back(meetings[0]);
        for(int i=1; i<meetings.size(); i++){
            if(meetings[i][0] <= non_over.back()[1]){
                non_over.back()[1] = max(non_over.back()[1], meetings[i][1]);
            }
            else{
                non_over.push_back(meetings[i]);
            }
        }
        int free = 0;
        if(non_over[0][0] > 1){
            free += non_over[0][0]-1;
        }
        int last = non_over[0][1];
        for(int i=1; i<non_over.size(); i++){
            if(non_over[i][0] > non_over[i-1][1]){
                free += non_over[i][0]-non_over[i-1][1]-1;
            }
            last = max(last, non_over[i][1]);
        }
        free += days-last;
        return free;
    }
};