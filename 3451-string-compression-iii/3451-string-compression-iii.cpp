class Solution {
public:
    string compressedString(string word) {
        string comp;
        int count = 1;
        for(int i=1; i<word.size(); i++){
            if(word[i-1] == word[i] && count<9){
                count++;
            }
            else{
                comp += to_string(count);
                comp += word[i-1];
                count = 1;
            }
        }
        comp += to_string(count);
        comp += word[word.size()-1];
        return comp;
    }
};