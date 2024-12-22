class Solution {
public:
    bool canJump(vector<int>& nums) {
        int j = nums.size()-1;
        for(int i=j-1; i>0; i--){
            if(nums[i]>= (j-i)){
                j = i;
            }
        }
        if(nums[0] >= j){
            return true;
        }
        return false;
    }
};