class Solution {
public:
bool isValid(string part){
    string rev=part;
    reverse(rev.begin(),rev.end());
    if(rev==part){
        return true;
    }
    else{
       return false;
    }
}
void ansF(string s,vector<string> vec,vector<vector<string>> &ans){
    if(s.length()==0){
        ans.push_back(vec);
        return;
    }
    for(int i=0;i<s.length();i++){
        string part=s.substr(0,i+1);
        if(isValid(part)){
            vec.push_back(part);
            ansF(s.substr(i+1),vec,ans);
            vec.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<string> vec;
        vector<vector<string>> ans;
        ansF(s,vec,ans);
        return ans;
    }
};