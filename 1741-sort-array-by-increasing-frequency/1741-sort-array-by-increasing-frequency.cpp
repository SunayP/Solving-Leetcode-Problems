class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> mp;
        for(int x: nums){
            mp[x]++;
        }
        vector<pair<int, int>> vp(mp.begin(), mp.end());
        sort(vp.begin(), vp.end(),[](pair<int, int>&a, pair<int, int>&b){
            if(a.second == b.second){
                return a.first>b.first;
            }
            else{
                return a.second<b.second;
            }
        });
        int k=0;
        for(auto it : vp){
            while(it.second--){
                nums[k++] = it.first;
            }
        }
        return nums;
    }
};