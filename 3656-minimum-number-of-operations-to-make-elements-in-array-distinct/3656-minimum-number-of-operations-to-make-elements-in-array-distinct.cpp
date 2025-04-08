class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        int op = 0;
        for(int i=n-1; i>=0; i--){
            mp[nums[i]]++;
            if(mp[nums[i]] > 1){
                if((i+1)%3 == 0){
                    op = (i+1)/3;
                }
                else{
                    op = i/3 + 1;
                }
                break;
            }
        }
        return op;
    }
};