class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26]= {0};

        for(char c : s){
            arr[c-'a']++;
        }

        for(char c : t){
            arr[c-'a']--;
        }

        for(int x : arr){
            if(x!=0){
                return false;
            }
        }

        return true;
    }
};

