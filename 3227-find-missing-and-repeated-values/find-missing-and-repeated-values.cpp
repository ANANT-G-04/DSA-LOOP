class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int x=n*n;
        vector<int> arr;
        map<int ,int>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int first=grid[i][j];
                if(m.find(first)!=m.end()){
                    arr.push_back(first);
                    m[first]=2;
                }
                m[first]=1;
            }
        }
        for(int i=1;i<=x;i++){
            if(m.find(i)==m.end()){
                arr.push_back(i);
            }
        }
        return arr;
    }
};