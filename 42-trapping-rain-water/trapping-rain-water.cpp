class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        
        vector<int>lm(height.size());
        vector<int> rm(height.size());
         lm[0]=height[0];
         rm[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            int k=max(lm[i-1],height[i]);
            lm[i]=k;
        }
        
        for(int i=n-2;i>=0;i--){
            int k=max(rm[i+1],height[i]);
            rm[i]=k;
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            int k=min(rm[i],lm[i]);
            if(lm[i]==height[i] || rm[i]==height[i]){
                continue;
            }
       sum+=k-height[i];
        }
        return sum;
    }
};