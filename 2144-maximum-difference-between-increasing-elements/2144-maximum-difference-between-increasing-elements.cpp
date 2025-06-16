class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int left_min = INT_MAX;
        int max_diff = -1;
        for(int i=0; i<nums.size(); i++){
            left_min = min(left_min, nums[i]);
            if(left_min < nums[i]){
                max_diff = max(max_diff, nums[i]-left_min);
            }
        }
        return max_diff;
    }
};