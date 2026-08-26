class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int str,end;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            if(i>0&& nums[i-1]==nums[i]){
                continue;
            }
              int target=-nums[i];
              str=i+1;
              end=nums.size()-1;
              while(str<end){
                   if(nums[str]+nums[end]==target){
                    vector<int>vec={nums[i],nums[str],nums[end]};
                    ans.push_back(vec);
                    str++;
                    end--;
                    while(str<end && nums[str]==nums[str-1]){
                        str++;
                    }
                   }
                   else if(nums[str]+nums[end]>target){
                    end--;
                   }
                   else{
                    str++;
                   }
              }
        }
        return ans;
    }
};