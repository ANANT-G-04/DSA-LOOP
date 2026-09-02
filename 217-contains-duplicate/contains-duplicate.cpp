class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
     sort(nums.begin(),nums.end());
     for(int i=0;i<nums.size();i++){
        if(i>0 && nums[i]==nums[i-1]){
            m[i]++;
            return true;
        }
        m[i]=1;
     }
    return false;
    }
};