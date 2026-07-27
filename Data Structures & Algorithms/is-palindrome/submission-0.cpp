class Solution {
public:

    char upper_to_lower(char ch){
        if(ch>='A'&&ch<='Z'){
            return ch-'A'+'a';
        }
        else{
            return ch;
        }
    }

    bool isAlphanumeric(char ch) {
        return (ch >= 'A' && ch <= 'Z') || 
               (ch >= 'a' && ch <= 'z') || 
               (ch >= '0' && ch <= '9');
    }

    bool isPalindrome(string s) {
        int st=0;
        int e=s.size()-1;

        while(st<e){
            while(st<e && !isAlphanumeric(s[st])){
                st++;
            }
            while(st<e && !isAlphanumeric(s[e])){
                e--;
            }

            if(upper_to_lower(s[st])!=upper_to_lower(s[e])){
                return false;
            }
            st++;
            e--;
        }

        return true;
    }
};
