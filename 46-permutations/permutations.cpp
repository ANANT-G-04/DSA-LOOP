class Solution {
public:
void getPer(vector<int>& nums,vector<vector<int>>&ans,int idx){
    if(idx==nums.size()){
        ans.push_back({nums});
        return;
    }
    for(int i=idx;i<nums.size();i++){
        swap(nums[i],nums[idx]);
        getPer(nums,ans,idx+1);
        //backtracking
        swap(nums[i],nums[idx]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int idx=0;
        getPer(nums,ans,idx);
        return ans;
    }
};