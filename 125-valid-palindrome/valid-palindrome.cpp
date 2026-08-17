class Solution {
public:
    bool isPalindrome(string s) {
        int str=0;int end=s.length()-1;
        
        while(str<=end){
            if(!isalnum(s[str])){
                str++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[str])!=tolower(s[end])){
                return false;
            }
            else{
                str++;
                end--;
            }
            
        }
        return true;
    }
};