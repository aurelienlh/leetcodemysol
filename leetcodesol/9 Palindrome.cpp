class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int leng=floor(s.length()/2);
        for(int i=0;i<leng;++i){
            if(s[i]!=s[s.length()-i-1]){
                return false;
            }
        }
        return true;
    }
};

