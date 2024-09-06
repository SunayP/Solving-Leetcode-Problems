class Solution {
public:
    bool isPalindrome(int x) {
       long reversed = 0;
       int dummy = x;
       while(x>0){
        int r = x%10;
        reversed = reversed * 10 + r;
        x/=10;
       }
       if(dummy == reversed){
        return true;
       }
       return false;
    }
};