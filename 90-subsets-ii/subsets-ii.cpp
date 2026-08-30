class Solution {
public:
void subSet(vector<int>& nums,vector<int>& vec,vector<vector<int>>& ans,int i){
    if(i==nums.size()){
        ans.push_back(vec);
        return;
    }
    //include
    vec.push_back(nums[i]);
    subSet(nums,vec,ans,i+1);
    //exclude;
    vec.pop_back();
    int index=i+1;
    while(index<nums.size() && nums[index]==nums[index-1]){
        index++;
    }
    subSet(nums,vec,ans,index);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> vec;
        vector<vector<int>> ans;
        int i=0;
        subSet(nums,vec,ans,i);
        return ans;
    }
};