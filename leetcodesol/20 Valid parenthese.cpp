#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> parentes = {
            {')', '('},
            {']', '['},
            {'}', '{'},
        };
        for(char c : s){
        if(parentes.find(c)!=parentes.end()){
            if (st.empty() || (st.top() !=parentes[c])) {
                return false ;
            }
            st.pop();
        }
        else{
            st.push(c);
        }


    }
    return(st.empty());
    }
};