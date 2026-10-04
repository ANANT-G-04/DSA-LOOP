class Solution {
public:
    bool checkValidString(string s) {
        int count=0;
        stack<int> st;
        stack<int> star;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
           else if(s[i]=='*'){
                star.push(i);
            }
           else{
            if(!st.empty()){
                st.pop();
            }
            else if(!star.empty()){
                star.pop();
            }
            else{
                return false;
            }
           }
        }
           while(!st.empty()){
            if(star.empty()){
                return false;
            }
             if(star.top()<st.top()){
                    return false;
            }
            else{
                star.pop();
                st.pop();
            }
           }
            return true;
    
    }
};