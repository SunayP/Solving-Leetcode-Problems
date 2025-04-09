class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        map<int, int> mp;
        bool find = false;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < k){
                return -1;
            }
            if(nums[i] == k){
                find = true;
            }
            mp[nums[i]]++;
        }
        if(find){
            return mp.size()-1;
        }
        return mp.size();
    }
};