class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> s;
        vector<int> ans;
        for(int i=0;i<k;i++){//for the first window...
            if(s.empty()){
                s.push_back(i);
            }
            while(s.size()>0 && nums[s.back()]<nums[i]){
                s.pop_back();
            }
            s.push_back(i);
        }
        ans.push_back(nums[s.front()]);
        for(int i=k;i<nums.size();i++){
            //check the elements are the part of the current window or not
            while(!s.empty() && s.front()<=i-k){
                s.pop_front();
            }
            while(s.size()>0 && nums[s.back()]<nums[i]){
                s.pop_back();
            }
            s.push_back(i);
            ans.push_back(nums[s.front()]);
        }
        
        return ans;
    }
};