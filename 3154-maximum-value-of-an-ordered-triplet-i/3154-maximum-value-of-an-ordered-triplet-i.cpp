class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long max_diff = 0, ans = 0, max_num = nums[0];
        long long n = nums.size();
        for(long long i = 1; i<n; i++){
            ans = max(ans, max_diff*nums[i]);
            max_diff = max(max_diff, max_num-nums[i]);
            max_num = max(max_num, 1ll * nums[i]);
        }
        return ans;
    }
};