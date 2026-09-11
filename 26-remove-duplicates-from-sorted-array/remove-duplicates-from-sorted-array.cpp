class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            temp.push_back(nums[i]);
        }
        nums.clear();
        for(int i=0;i<temp.size();i++){
            nums.push_back(temp[i]);
            cout<< nums[i];
        }
        return nums.size();
    }
};