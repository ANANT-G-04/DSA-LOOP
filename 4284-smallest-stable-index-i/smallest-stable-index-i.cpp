class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int i=0;
        
        while(i<nums.size()){
        int maximum=INT_MIN;
        int minimum=INT_MAX;
            for(int j=0;j<=i;j++){
                maximum=max(maximum,nums[j]);
            }
            for(int j=i;j<nums.size();j++){
                minimum=min(minimum,nums[j]);
            }
            if(maximum-minimum<=k){
                return i;
            }
            i++;
        }
        return -1;
    }
};