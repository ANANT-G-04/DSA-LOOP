class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int c=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0){
            c++;
            continue;
           }
           ans.push_back(nums[i]);
        }
        for(int j=0;j<c;j++){
            ans.push_back(0);
        } 
        for(int k=0;k<ans.size();k++){
            nums[k]=ans[k];
        }
        
    }
};