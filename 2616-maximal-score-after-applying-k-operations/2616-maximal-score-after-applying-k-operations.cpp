class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        long long score = 0;
        while(k--){
            int num = pq.top();
            pq.pop();
            score += num;
            if(num%3 ==0) pq.push(num/3);
            else pq.push((num/3)+1);
        }
        return score;
    }
};