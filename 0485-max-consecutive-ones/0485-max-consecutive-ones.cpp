class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxlen = 0;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                maxlen = max(maxlen, count);
                count =0;
            }
            else{
                count++;
            }
        }
        maxlen = max(maxlen, count);
        return maxlen;
    }
};