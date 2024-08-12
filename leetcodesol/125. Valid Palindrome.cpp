class Solution {
public:
    bool isPalindrome(string s) {
        int newlen=0;
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                s[newlen]=tolower(s[i]);
                newlen++;
            }
        }
        cout<<s;
        if(s.empty()){return true;}
        for(int i=0;i<newlen/2;++i){
            if(s[i]!=s[newlen-i-1]){
                return false;
            }
        }
        return true;
    }
};
// vrai solution
class Solution {
public:
    bool isPalindrome(string s) {
        // Two pointer
        // Time: O(n)
        // Space: O(1)
        
        int n = s.size();
        int l = 0;
        int r = n-1;
        
        while (l<r) {
            while (l<n and !isalnum(s[l]))
                l++;
            while (r>=0 and !isalnum(s[r]))
                r--;
            if (l<n and r>=0 and tolower(s[l]) != tolower(s[r]))
                return false;
            l++, r--;
        }
        
        return true;
    }
};