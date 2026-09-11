class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        vector<int> vec;
        set <vector<int>> ans;
       for(int i=0;i<n;i++){
        if(digits[i]!=0){
        vec.push_back(digits[i]);
        
        for(int j=0;j<n;j++){
            if(j!=i){
                vec.push_back(digits[j]);
                for(int k=0;k<n;k++){
                    if(k!=j&& k!=i){
                        vec.push_back(digits[k]);
                         if(vec[2]%2==0){
        ans.insert(vec);
        }
        
            vec.pop_back();
        
                    }
                }
                vec.pop_back();
            }
        }
       
        vec.clear();
       }
       } 
       return ans.size();
    }
};