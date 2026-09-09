class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> m2;
        unordered_map<char,int> m3;
        int freq1=1;
        int freq2=1;
        for(int i=0;i<s.length();i++){
            if(m2.find(s[i])==m2.end()){
                m2[s[i]]=freq1;
            }
            else{
                m2[s[i]]++;
            }
        }
        for(int i=0;i<t.length();i++){
            if(m3.find(t[i])==m3.end()){
                m3[t[i]]=freq2;
            }
            else{
                m3[t[i]]++;
            }
        }
        if(m2.size()!=m3.size()){
            return false; 
        }
     unordered_map<char,char> m;
     for(int i=0;i<s.length();i++){
        if(m.find(s[i])==m.end()){
         m[s[i]]=t[i];
        }
        
        if(m[s[i]]!=t[i]){
           return false;
        }
     }   
     
     return true;
    }
};