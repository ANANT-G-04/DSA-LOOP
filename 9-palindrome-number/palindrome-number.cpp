class Solution {
public:
    bool isPalindrome(int x) {
        int n;
       unsigned int p=0;
        int k=x;
      if(x>=0){
        while(k>0){
         n=k%10;
         p=p*10+n;
        k=k/10;
        }
        if(p==x){
            return true;
        }
      }
      return false;
    }
};