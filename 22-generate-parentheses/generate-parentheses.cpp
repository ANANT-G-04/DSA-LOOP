class Solution {
public:
void findPara(int n,string vec,vector<string>& ans,int closed,int open){
    if(open==n && closed==n){
        ans.push_back(vec);
        return;
    }
    if(open<n){
        vec.push_back('(');
        findPara(n,vec,ans,closed,open+1);
        vec.pop_back();
    }
    if(closed<open){
        vec.push_back(')');
        findPara(n,vec,ans,closed+1,open);
        vec.pop_back();
    }
   
}
    vector<string> generateParenthesis(int n) {
        string vec;
        vector<string > ans;
        int closed=0;
        int open=0;
          findPara(n,vec,ans,closed,open);
           return ans;
    }
};