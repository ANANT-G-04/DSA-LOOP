class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack <int> s;
        vector<int> ans(nums.size());
        for(int i=2*nums.size()-1;i>=0;i--){
            while(s.size()>0 && s.top()<=nums[i%nums.size()]){
                s.pop();
            }
            if(s.size()==0){
                ans[i%nums.size()]=-1;
            }
            else{
                ans[i%nums.size()]=s.top();
            }
            s.push(nums[i%nums.size()]);
        }
        return ans;
    }
};