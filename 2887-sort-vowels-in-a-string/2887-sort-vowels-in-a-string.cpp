class Solution {
private:
    bool isVowel(char c) {
        return string("AEIOUaeiou").find(c) != string::npos;
    }
public:
    string sortVowels(string s) {
        string vow = "";
        for(int i=0; i<s.size(); i++){
            if(isVowel(s[i])){
                vow += s[i];
            }
        }
        sort(vow.begin(), vow.end());
        int j = 0;
        for(int i=0; i<s.size(); i++){
            if(isVowel(s[i])){
                s[i] = vow[j++];
            }
        }
        return s;
    }
};