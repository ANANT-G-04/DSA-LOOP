class Solution {
public:
    string reverseWords(string s) {
reverse(s.begin(),s.end());
string ans="";
for(int i=0;i<s.length();i++){
    string str="";
    while(char(s[i])!=32 && i<s.length()){
        str+=s[i];
        i++;
    }
    reverse(str.begin(),str.end());
    if(str.length()>0){
    ans=ans+" "+str;
    }
}
string ans2;
for(int i=1;i<ans.length();i++){
    ans2+=ans[i];
}
return ans2;
    }
};