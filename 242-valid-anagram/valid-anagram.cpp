class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m1;
        for(int i=0;i<s.length();i++){
            if(m1.find(s[i])==m1.end()){
                m1[s[i]]=1;
            }
            else{
                m1[s[i]]++;
            }
        } 
        map<char,int> m2;
        for(int i=0;i<t.length();i++){
            if(m2.find(t[i])==m2.end()){
                m2[t[i]]=1;
            }
            else{
                m2[t[i]]++;
            }
        }
        if(m1==m2){
            return true;
        } 
        return false;
    }
};