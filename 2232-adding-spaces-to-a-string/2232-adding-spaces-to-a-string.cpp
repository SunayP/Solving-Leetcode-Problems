class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int j=0,i=0;
        if(spaces[j] == 0){
            ans += " ";
            j++;
        }
        while(i<s.size()-1){
            if(j<spaces.size() && i+1 == spaces[j]){
                ans += s[i];
                ans += " ";
                j++;
            }
            else{
                ans += s[i];
            }
            i++;
        }
        if(j<spaces.size() && i == spaces[j]){
            ans += " ";
            ans += s[i];
        }
        else{
            ans += s[i];
        }
        return ans;
    }
};