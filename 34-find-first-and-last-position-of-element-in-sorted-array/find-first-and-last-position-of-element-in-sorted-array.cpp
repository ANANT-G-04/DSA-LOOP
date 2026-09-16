class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        vector<int> res;
        vector<int> nf={-1,-1};
       int str=0;
       int end=nums.size()-1;
       //first
       while(str<=end){
        int mid=str+(end-str)/2;
        if(nums[mid]<target){
            str=mid+1;
        }
        else if(nums[mid]>target){
            end=mid-1;
        }
        else{
          
           ans.push_back(mid);
           end=mid-1;
        }
       }
       if(ans.size()==0){
        return nf;
        
       }
       res.push_back(ans[ans.size()-1]);
       //last occurence
       int first=ans[ans.size()-1];
       int str2=first+1;
       int end2=nums.size()-1;
       while(str2<=end2){
        int mid2=str2+(end2-str2)/2;
        if(nums[mid2]<target){
            str2=mid2+1;
        }
        else if(nums[mid2]>target){
            end2=mid2-1;
        }
        else{
           
           ans.push_back(mid2);
           str2=mid2+1;
        }
       }
       
      
       res.push_back(ans[ans.size()-1]);
       return res;
    }
};