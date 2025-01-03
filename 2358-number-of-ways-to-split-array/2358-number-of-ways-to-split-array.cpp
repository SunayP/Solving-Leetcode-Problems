class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
        }
        long long rev = 0;
        int count = 0;
        for(int i=n-1; i>0; i--){
            sum -= nums[i];
            rev += nums[i];
            if(sum >= rev){
                count++;
            }
        }
        return count;
    }
};