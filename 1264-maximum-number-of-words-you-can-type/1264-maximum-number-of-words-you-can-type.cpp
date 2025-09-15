class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int words = 0;
        int i=0, n=text.size();
        while(i<n){
            if(brokenLetters.find(text[i]) != string::npos){
                while(text[i] != ' ' && i<n){
                    i++;
                }
                if(i == n){
                    break;
                }
            }
            else if(text[i] == ' ' || i == n-1){
                words++;
            }
            i++;
        }
        return words;
    }
};