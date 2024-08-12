class Solution {
public:
    int lengthOfLastWord(string s) {
        int end=s.length()-1;
        int len=0;
        while(end>=0){
           if(s[end]!=' '){
            len++;
            end--;
           } 
           else if(len==0){
            end--;
           }
           else {
            break;
           }
        }
        return len;
    }
};