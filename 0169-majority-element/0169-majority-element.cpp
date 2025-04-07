class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int el = nums[0], n = nums.size();
        for(int i=1; i<n; i++){
            if(count == 0){
                el = nums[i];
            }
            if(nums[i] == el){
                count++;
            }
            else{
                count--;
            }
        }
        if(count > 0){return el;}
        return -1;
    }
};