class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        long long totalPairs = 0, res = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); ++right) {
            // Add nums[right] to the window
            totalPairs += freq[nums[right]];
            freq[nums[right]]++;

            // Shrink window until totalPairs < k
            while (totalPairs >= k) {
                res += nums.size() - right;  // all subarrays starting at left and ending >= right
                totalPairs -= freq[nums[left]] - 1;
                freq[nums[left]]--;
                left++;
            }
        }

        return res;
    }
};
