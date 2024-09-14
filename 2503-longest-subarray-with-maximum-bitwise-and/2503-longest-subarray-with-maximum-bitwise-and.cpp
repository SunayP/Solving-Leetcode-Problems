class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int m =*max_element(nums.begin(), nums.end());
        int c = 0, l=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == m){
                c++;
            }
            else{
                l = max(l, c);
                c = 0;
            }
        }
        l = max(l, c);
        return l;
    }
};