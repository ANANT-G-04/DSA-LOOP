class Solution {
public:
void finder(vector<int>& nums,vector<int> used,set<vector<int>>& ans,vector<int> vec){
    for(int i=0 ;i<nums.size();i++){
        if(vec.size()==nums.size()){
            
            ans.insert(vec);
            return;
        }
        if(used[i]==1){
            continue;
        }
        vec.push_back(nums[i]);
        used[i]=1;
        finder(nums,used,ans,vec);
        //backtracking
        vec.pop_back();
        used[i]=0;
    }
}
 vector<vector<int>> permuteUnique(vector<int>& nums){
    vector<int> used(nums.size(),0);
    set<vector<int>> ans;
    vector<int> vec;
    finder(nums,used,ans,vec);
     vector<vector<int>> result(ans.begin(), ans.end());
        return result;
    }
};