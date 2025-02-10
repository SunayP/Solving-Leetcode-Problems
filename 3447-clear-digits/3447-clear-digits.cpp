class Solution {
public:
    string clearDigits(string s) {
        int c = 0;
        string ans = "";
        for(int i = s.size()-1; i>=0; i--){
            if(isdigit(s[i])){
                c++;
            }
            else{
                if(c == 0){
                    ans = s[i] + ans;
                }
                else{
                    c--;
                }
            }
        }
        return ans;
    }
};