class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefixSum(nums.size(),0);
        int count=0;
        prefixSum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }
         map<int,int> m;
        for(int j=0;j<nums.size();j++){
            if(prefixSum[j]==k){
                count ++;
            }
            
            int val=prefixSum[j]-k;
            if(m.find(val)!=m.end()){
                count+=m[val];
            }
            if(m.find(prefixSum[j])==m.end()){
                m[prefixSum[j]]=0;
            }
            m[prefixSum[j]]++;
        }
        return count;
    }
};