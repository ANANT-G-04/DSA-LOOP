class Solution {
public:
void findAns(vector<int>& candidates, int target,int idx,vector<int> vec,vector<vector<int>>& ans){
    int sum=0;
    for(int i=0;i<vec.size();i++){
        sum+=vec[i];
    }
    if(sum==target){
        ans.push_back(vec);
    }
    if(sum>target){
        return;
    }
    while(idx<candidates.size()){
        vec.push_back(candidates[idx]);
        findAns(candidates,target,idx,vec,ans);
        vec.pop_back();
        idx++;
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int idx=0;
        vector<int> vec;
        vector<vector<int>> ans;
        findAns(candidates,target,idx,vec,ans);
        return ans;
    }
};