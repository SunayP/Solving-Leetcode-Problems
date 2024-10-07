class Solution {
public:
    int minLength(string s) {
        int count = 1;
        while(count){
            count = 0;
            int i = 0;
            while(i<s.size()){
                if(s[i] == 'A' && s[i+1] == 'B'){
                    s.erase(s.begin()+i, s.begin()+i+2);
                    count++;
                }
                else if(s[i] == 'C' && s[i+1] == 'D'){
                    s.erase(s.begin()+i, s.begin()+i+2);
                    count++;
                }
                else{
                    i++;
                }
            }
        }
        return s.size();
    }
};