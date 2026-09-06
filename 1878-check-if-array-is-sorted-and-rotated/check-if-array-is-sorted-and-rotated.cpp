class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> vec=nums;
        sort(vec.begin(),vec.end());
       for(int x=0;x<vec.size();x++){
         int ans=0;
        for(int i=0;i<vec.size();i++){
            if(nums[i]==vec[(i+x)%vec.size()]){
                ans++;
            }
            else{
                break;
            }
        }
        if(ans==vec.size()){
            return true;
        }
       }
       return false;
    }
};