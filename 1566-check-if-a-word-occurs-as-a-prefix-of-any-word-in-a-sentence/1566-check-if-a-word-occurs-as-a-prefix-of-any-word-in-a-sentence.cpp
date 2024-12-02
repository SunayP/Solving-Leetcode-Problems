class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n = searchWord.size();
        string str = "";
        int words = 0;
        for(int i=0; i<sentence.size(); i++){
            if(sentence[i] == ' '){
                words++;
                if( str.size() >= n && str.substr(0,n) == searchWord){
                    return words; 
                }
                str = "";
            }
            else{
                str += sentence[i];
            }
        }
        words++;
        if( str.size() >= n && str.substr(0,n) == searchWord){
            return words; 
        }
        return -1;
    }
};