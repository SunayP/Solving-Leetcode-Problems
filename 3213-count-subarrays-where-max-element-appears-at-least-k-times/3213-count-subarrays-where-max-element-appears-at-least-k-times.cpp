class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int max_freq = 0;
        int max_ele = *max_element(nums.begin(), nums.end());
        int i = 0,j = -1, n = nums.size();
        long long ans = 0;
        for(i = 0; i<nums.size(); i++){
            if(max_ele == nums[i]){
                max_freq++;
            }
            if(max_freq >= k){
                j = i;
                ans = nums.size()-j;
                break;
            }
        }
        if(j == -1){return ans;}
        i = 0;
        while(i<n && j<n){
            if(max_ele == nums[i]){
                max_freq--;
                if(max_freq >= k){
                    j = i;
                    ans += nums.size()-j;
                }
                else{
                    while(j<n-1 && max_freq < k){
                        j++;
                        if(nums[j] == max_ele){
                            max_freq++;
                        }
                    }
                    if(max_freq < k){
                        break;
                    }
                    else{
                        ans += n-j;
                    }
                }
            }
            else{
                ans += nums.size()-j;
            }
            i++;
        }
        return ans;
    }
};