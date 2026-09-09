class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000){
            return 0;
        }
        int count=0;
       long long trial=n;
        while(trial>0){
            count++;
            trial=trial/10;
        }
        int finder=4;
        int k=1;
        long long subs=1000;
        long long ans=0;
        while(finder<=count){
            if(finder==count){
                ans=ans+(n-subs+1)*k;
                finder++;
            }
            if(finder<count){
                ans=ans+(9*subs)*k;
                if(finder % 3 == 0){
                    k++;
                }
                subs=subs*10;
                finder++;
            }
        }
       return ans;
    }
};