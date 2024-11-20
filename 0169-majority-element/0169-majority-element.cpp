class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int el;
        for(int i=0; i<nums.size(); i++){
            if(count == 0){
                count = 1;
                el = nums[i];
            }
            else if(nums[i] == el){
                count++;
            }
            else{
                count--;
            }
        }
        count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == el){count++;}
        }
        if(count > nums.size()/3){
            return el;
        }
        return -1;
    }
};