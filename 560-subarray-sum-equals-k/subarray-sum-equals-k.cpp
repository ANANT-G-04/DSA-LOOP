class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k){
                c++;
            }
            int p=i+1;
            long long sum=nums[i];
            while(p<nums.size()){
                 sum=sum+nums[p];
                 if(sum==k){
                    c++;
                    
                 } 
                 p++;
            }
        }
        return c;
    }
};