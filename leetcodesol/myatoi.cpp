class Solution {
public:
    int myAtoi(string s) {
        int len=s.length();
        int i=0;
        int number=0;
        bool neg=false;
        while((s[i]==' ') && (i<len) ){
            cout<<s[i];
            ++i;
        }
        if(s[i]=='-'){
            neg=true;
        }
        while(i<len && isdigit(s[i])){
            int n=s[i]-'0';
            //cout<<n;
            number=number*10+n;
            cout<<number;
            i++;
        }
        if(neg){
            number=(-1)*number;
        }
        return(number);
    }
};