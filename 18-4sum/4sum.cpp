class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                    continue;
                }
            
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                
                int str=j+1;
               int end=nums.size()-1;
                while(str<end){
                    long long sum=(long long)nums[str]+(long long)nums[end]+(long long)nums[i]+(long long)nums[j];
                    if(sum==target){
                      ans.push_back({nums[i],nums[j],nums[str],nums[end]});
                      str++;
                      end--;
                      while(str<end && nums[str]==nums[str-1]){
                        str++;
                      }
                    }
                    else if(sum>target){
                        end--;
                    }
                    else{
                        str++;
                    }
                }
            }
        }
        return ans;
    }
};