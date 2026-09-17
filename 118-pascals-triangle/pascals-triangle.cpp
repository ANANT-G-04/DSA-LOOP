class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>> ans;
        if(n==1){
            ans.push_back({1});
            return ans;
        }
        if(n==2){
            ans.push_back({1});
            ans.push_back({1,1});
            return ans;
        }
         ans.push_back({1});
         ans.push_back({1,1});
        int k=3;
        
        vector<int> vec1;
        vector<int> vec2;
        vec1.push_back(1);
        vec1.push_back(1);
        while(k<=n){
            vec2.push_back(1);
        for(int i=0;i<vec1.size()-1;i++){
            vec2.push_back(vec1[i]+vec1[i+1]);
        }
            vec2.push_back(1);
        ans.push_back(vec2);
        
        vec1=vec2;
        vec2.clear();
        k++;
        }
        return ans;
    }
};