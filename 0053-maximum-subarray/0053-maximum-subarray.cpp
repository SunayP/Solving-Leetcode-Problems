class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;
        int nmax = nums[0];
        for(int i=0; i<nums.size();i++){
            sum += nums[i];
            if(sum<0){
                sum = 0;
            }
            maxi = max(maxi, sum);
            nmax = max(nmax, nums[i]);
        }
        if(maxi == 0){
            return nmax;
        }
        return maxi;
    }
};