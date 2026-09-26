class Solution {
public:
string evaluate(string s,vector<vector<string>>& knowledge){
    unordered_map<string ,string>m;
    for(int i=0;i<knowledge.size();i++){
        m[knowledge[i][0]]=knowledge[i][1];
    }
    for(int i=0;i<s.length();i++){
       
        int l=0;
        if(s[i]=='('){
            l=s.find(')',i);
            string st=s.substr(i+1,l-i-1);
            if(m.find(st)!=m.end()){
                s.replace(i,l-i+1,m[st]);
            }
            else{
                s.replace(i,l-i+1,"?");
            }
            
        }
       
    }
    return s;
    }
};