class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> idx;
        int ans=0;
        idx.push(-1);
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                idx.push(i);
            }
            else{
                idx.pop();
                if(idx.empty()){
                    idx.push(i);

                }
                else{
                    ans=max(ans,i-idx.top());
                }
            }
        }
        return ans;
        
    }
};