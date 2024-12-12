class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for(auto &i : gifts){
            pq.push(i);
        }
        while(k--){
            int n = pq.top();
            pq.pop();
            pq.push(sqrt(n));
        }
        long long sum = 0;
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};