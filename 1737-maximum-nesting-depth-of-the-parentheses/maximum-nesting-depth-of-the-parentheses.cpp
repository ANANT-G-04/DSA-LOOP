class Solution {
public:
    int maxDepth(string s) {
        int m=0;
        stack <char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]==')'){
                m=max(m,(int)st.size());
                st.pop();
            }
            else{
                if(s[i]=='('){
                    st.push(s[i]);
                }
            }
        }
        return m;
    }
};