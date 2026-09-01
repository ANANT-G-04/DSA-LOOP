class Solution {
public:
void pComp(vector<vector<int>>& ans,vector<int>&vec ,int n,int k,int idx){
    if(vec.size()==k){
        ans.push_back({vec});
        return;
    }
    for(int i=idx;i<=n;i++){
           vec.push_back(i);
           pComp(ans,vec,n,k,i+1);
           vec.pop_back();
           
    }
    
}
    vector<vector<int>> combine(int n, int k) {
        int idx=1;
        vector<vector<int>> ans;
        vector<int> vec;
        pComp(ans,vec,n,k,idx);
        return ans;
    }
};