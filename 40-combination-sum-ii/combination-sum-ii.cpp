class Solution {
public:
void find(vector<int>& candidates, int target,vector<int> vec,vector<vector<int>>& ans,int index){
    int sum=0;
    for(int j=0;j<vec.size();j++){
        sum+=vec[j];
    }
    if(sum==target){
        ans.push_back(vec);
        return;
    }
    if(sum>target){
        return;
    }
    for(int i=index;i<candidates.size();i++){
       
        if(i>index && candidates[i]==candidates[i-1] ){
            continue;
        }
         vec.push_back(candidates[i]);
        find(candidates,target,vec,ans,i+1 );
        vec.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> vec;
        vector<vector<int>> ans;
        int index=0;
        find(candidates,target,vec,ans,index);
        return ans;
    }
};