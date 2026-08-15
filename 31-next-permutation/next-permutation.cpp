class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot;
        int index=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
;
index=i;
break;
            }
        }
        if(index==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        for(int i=nums.size()-1;i>index;i--){
            if(nums[index]<nums[i]){
                swap(nums[i],nums[index]);
                break;
            }
        }
           
sort(nums.begin()+index+1,nums.end());
            
            
        
    }
};