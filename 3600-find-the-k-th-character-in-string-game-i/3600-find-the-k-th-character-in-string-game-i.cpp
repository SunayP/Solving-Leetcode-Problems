class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while(word.size() < k){
            int l = word.size();
            for(int i=0; i<l; i++){
                if(word[i] == 'z'){
                    word+='a';
                }
                else{
                    word += (word[i]+1);
                }
            }
        }
        return word[k-1];
    }
};