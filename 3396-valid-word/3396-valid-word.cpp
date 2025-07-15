class Solution {
public:
    bool isValid(string word) {
        if(word.size() < 3){
            return false;
        }
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        set<char> st = {'a', 'e', 'i', 'o', 'u'};
        bool vowel = false, consonant = false;
        for(int i=0; i<word.size(); i++){
            if(st.find(word[i]) != st.end()){
                vowel = true;
            }
            else if(word[i] >= 'a' && word[i] <= 'z'){
                consonant = true;
            }
            if((word[i] >= '0' && word[i] <='9') || (word[i] >= 'a' && word[i] <= 'z')){
                continue;
            }
            return false;
        }
        if(vowel && consonant){
            return true;
        }
        return false;
    }
};