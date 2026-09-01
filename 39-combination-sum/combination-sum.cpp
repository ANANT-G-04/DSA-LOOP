class Solution {
public:
void getAns(vector<int>& candidates, vector<int> vec,vector<vector<int>>& ans,int target,int idx){
    int sum=0;
    for(int i=0;i<vec.size();i++){
            sum=sum+vec[i];
        }
    if(sum==target){
    ans.push_back(vec);
    return;
    }
    if(sum>target){
        return;
    }
    
    while(idx<candidates.size()){
        vec.push_back(candidates[idx]);
        
        
        getAns( candidates, vec,ans, target,idx);
        
            vec.pop_back();
            idx++;
        
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int idx=0;
        vector<int> vec;
        vector<vector<int> > ans;
        getAns(candidates,vec,ans,target,idx);
        return ans;

    }
};