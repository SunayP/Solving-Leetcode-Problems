class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(255, 0);
        int l = 0;
        int left = 0, right = 0;
        while(right < s.size()){
            while(v[int(s[right])] == 1){
                v[int(s[left])] = 0;
                left++;
            }
            v[int(s[right])] = 1;
            l = max(l, right-left+1);
            right++;
        }
        return l;
    }
};