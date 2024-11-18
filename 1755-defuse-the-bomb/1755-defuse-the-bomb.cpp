class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);
        if(k == 0){return ans;}
        int left, right;
        if(k > 0){
            left = 1;
            right = k;
        }
        else{
            k = abs(k);
            left = n-k;
            right = n-1;
        }
        int sum = 0;
        for(int i=left; i<=right; i++){
            sum += code[i];
        }
        for(int i=0; i<n; i++){
            ans[i] = sum;
            sum -= code[left];
            left++;
            if(left == n){left = 0;}
            right++;
            if(right == n){right = 0;}
            sum += code[right];
        }
        return ans;
    }
};