class Solution {
public:
    void subStr(vector<int> &nums ,vector<int> &vec,vector<vector<int>>&ans,int i){
     if(i==nums.size()){
        ans.push_back(vec);
        return ;
     }
     
     //inclusion
     vec.push_back(nums[i]);
     subStr(nums,vec,ans,i+1);
     //removal
     vec.pop_back();
     subStr(nums,vec,ans,i+1);
       
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int i=0;
        vector<vector<int>> ans;
        vector<int> vec;
        subStr(nums,vec,ans,i);
        return ans;
    }
};