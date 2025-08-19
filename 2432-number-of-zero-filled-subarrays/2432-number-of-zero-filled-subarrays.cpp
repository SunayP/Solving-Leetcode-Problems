class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count = 0;
        long long temp = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                temp++;
            }
            else{
                count += temp*(temp+1)/2;
                temp = 0;
            }
        }
        count += temp*(temp+1)/2;
        return count;
    }
};