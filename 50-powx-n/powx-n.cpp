class Solution {
public:
    double myPow(double x, int n) {
     double ans=1;
       unsigned int m;
        m=n;
        if(n<0){
           m=-m;
            x=1/x;
        }
        while(m>0){
            if(m%2==1){
                ans*=x;
            }
            x*=x;
            m=m/2;
        }
        return ans;
    }
};
 