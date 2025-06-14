class Solution {
public:
    int minMaxDifference(int num) {
        string org = to_string(num);
        
        // Create max_num by replacing first non-9 digit with 9
        string max_str = org;
        char to_replace_max = '\0';
        for (char ch : org) {
            if (ch != '9') {
                to_replace_max = ch;
                break;
            }
        }
        if (to_replace_max != '\0') {
            for (char &ch : max_str) {
                if (ch == to_replace_max) ch = '9';
            }
        }
        
        // Create min_num by replacing first digit with 0
        string min_str = org;
        char to_replace_min = org[0];
        for (char &ch : min_str) {
            if (ch == to_replace_min) ch = '0';
        }
        
        int max_num = stoi(max_str);
        int min_num = stoi(min_str);
        
        return max_num - min_num;
    }
};
