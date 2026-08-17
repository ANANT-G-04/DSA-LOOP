class Solution {
public:
bool isValid(int fr[26],int fre[26]){
for(int i=0;i<26;i++){
    if(fr[i]!=fre[i]){
        return false;
    }
    
    }
return true;
}
    bool checkInclusion(string s1, string s2) {
     int freq[26]={0};
     for(int i =0;i<s1.length();i++){
        freq[s1[i]-'a']++;
     } 
    
     int window=s1.length();
     for(int i=0;i<s2.length();i++){
 int freqwin[26]={0};
 if((i+s1.length())<=s2.length()){
    for(int j=i;j<i+s1.length();j++){
        freqwin[s2[j]-'a']++;
    }
 }
 if(isValid(freq,freqwin)){
    return true;
 }
     }
     return false;
    }
};