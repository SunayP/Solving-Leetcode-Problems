class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> prefix;
        int prefix_sum = 0, m;
        prefix[prefix_sum]++;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            prefix_sum += nums[i];
            m = prefix_sum-k;
            count += prefix[m];
            prefix[prefix_sum]++;
        }
        return count;
    }
};