class Solution {
public:
    int minAddToMakeValid(string s) {
        stack <int> st;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                if(st.empty()){
                    count++;
                }
                else{
                    st.pop();
                    
                }
            }
        }
        if(st.empty()){
            return count;
        }
        else{
            for(int i=0;i<st.size();i++){
                count++;
                
            }
        }
        return count;
    }
};