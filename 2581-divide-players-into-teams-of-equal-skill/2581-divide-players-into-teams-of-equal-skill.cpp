class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long sum = 0;
        long long chemistry = 0;
        sort(skill.begin(), skill.end());
        int start = 0, end = skill.size()-1;
        sum = skill[start] + skill[end];
        while(start < end){
            if(sum == (skill[start] + skill[end])){
                chemistry += skill[start]*skill[end];
            }
            else{
                return -1;
            }
            start++;
            end--;
        }
        return chemistry;
    }
};