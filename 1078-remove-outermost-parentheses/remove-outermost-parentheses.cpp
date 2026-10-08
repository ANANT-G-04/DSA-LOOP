class Solution {
public:
    string removeOuterParentheses(string s) {
        string str="";
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
                if(st.size()>1){
                    str=str+"(";
                }
            }
            else{
                if(st.size()>1){
                    str+=")";
                    st.pop();
                }
                else{
                    
                    st.pop();
                }
            }
        }
        return str;
    }
};