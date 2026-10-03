class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=0,sum2=0;
        for(int i=0;i<gas.size();i++){
            sum1=sum1+gas[i];
        }
         for(int i=0;i<cost.size();i++){
            sum2=sum2+cost[i];
        }
        if(sum1<sum2)
        return -1;
        int curr=0;
        int start=0;
        for(int i=0;i<gas.size();i++){
            curr=curr+gas[i]-cost[i];
            if(curr<0){
                curr=0;
                start=i+1;
            }
        }
        return start;
    }
};