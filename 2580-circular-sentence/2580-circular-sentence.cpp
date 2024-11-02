class Solution {
public:
    bool isCircularSentence(string sentence) {
        string str = "";
        for(int i=0; i<sentence.size(); i++){
            if(sentence[i] == ' '){
                if(str.back() != sentence[i+1]){
                    return false;
                }
                str = "";
            }
            else{
                str += sentence[i];
            }
        }
        if(sentence.back() != sentence[0]){
            return false;
        }
        return true;
    }
};