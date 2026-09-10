class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s==""){
            return 0;
        }
       string str="";
       int count=0;
       int ans=0;
       for(int i=0;i<s.length();i++){
        if(str.find(s[i])>str.length()){
            str=str+s[i];
        }
        else{
          int j=str.find(s[i]);
          str=str.substr(j+1);
          str+=s[i];
        }
        ans=max(ans,(int)str.length());
       }
       return ans;
    }
};