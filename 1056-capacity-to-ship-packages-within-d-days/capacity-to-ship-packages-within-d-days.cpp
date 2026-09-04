class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        int req=0;
        int finalreq;
        for(int i=0;i<weights.size();i++){
            sum=sum+weights[i];
            req=max(req,weights[i]);
        }
        
        while(req<=sum){
            int mid=req+(sum-req)/2;
            int sum2=0;
            int day=1;
            for(int i=0;i<weights.size();i++){
                
                if(sum2+weights[i]>mid){
                    day++;
                    sum2=0;
                }
                sum2=sum2+weights[i];
                
            }
            if(day<=days){
                sum=mid-1;
             finalreq=mid;
            }
            else{
                req=mid+1;
            }
        }
        return finalreq;
    }
};