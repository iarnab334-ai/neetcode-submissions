class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        while(r>l){
            while(r > l && !isalnum(s[l])){
                l++;
            }

            while(r>l && !isalnum(s[r])){
                r--;
            }

            if(tolower(s[r]) != tolower(s[l])){
                return false;
            }

            r--;
            l++;
        }

        return true;
        
    }
};
