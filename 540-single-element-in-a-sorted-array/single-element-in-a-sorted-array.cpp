class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
   int str=1;
   int end=nums.size()-2;
   if(nums.size()==1){
    return nums[0];
   }
   if(nums[0]!=nums[1]){
    return nums[0];
   }
   if(nums[nums.size()-1]!=nums[nums.size()-2]){
    return nums[nums.size()-1];
   }
   int mid;
   while(str<=end){
    mid = str+(end-str)/2;
    if(mid%2==0){
        if(nums[mid]==nums[mid-1]){
            end=mid-1;
        }
        if(nums[mid]==nums[mid+1]){
            str=mid+1;
        }
    }
    else{
        if(nums[mid]==nums[mid-1]){
            str=mid+1;
        }
        if(nums[mid]==nums[mid+1]){
            end=mid-1;
        }
    }
    if(nums[mid]!=nums[mid-1]&& nums[mid]!=nums[mid+1]){
        return nums[mid];
    }
   }
   return -1;
    }
};