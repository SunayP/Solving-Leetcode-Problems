class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int, int>mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        for(int i=0; i<arr.size(); i++){
            if(mp[arr[i]*2] >= 1){
                if(arr[i] == 0 && mp[0] >= 2){
                    return true;
                }
                else if(arr[i] == 0){
                    continue;
                }
                return true;
            }   
        }
        return false;
    }
};