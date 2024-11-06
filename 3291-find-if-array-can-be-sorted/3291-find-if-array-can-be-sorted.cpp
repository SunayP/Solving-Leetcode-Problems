class Solution {
public:
    int setbits(int num){
        int c = 0;
        while(num > 0){
            if(num%2 == 1){
                c++;
            }
            num /= 2;
        }
        return c;
    }
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> bits(n);
        for(int i=0; i<n; i++){
            bits[i] = setbits(nums[i]);
        }
        int prevmax = INT_MIN;
        int currmin = nums[0], currmax = nums[0];
        for(int i=1; i<n; i++){
            if(bits[i] == bits[i-1]){
                currmin = min(currmin, nums[i]);
                currmax = max(currmax, nums[i]);
                continue;
            }
            if(currmin<prevmax){
                return false;
            }
            prevmax = currmax;
            currmin = nums[i];
            currmax = nums[i];
        }
        if(currmin<prevmax){
            return false;
        }
        return true;
    }
};