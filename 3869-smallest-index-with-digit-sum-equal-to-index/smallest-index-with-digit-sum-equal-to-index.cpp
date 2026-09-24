class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int mini=INT_MAX;
        bool res=false;
      for(int i=0;i<nums.size();i++){
        int sum=0;
        while(nums[i]!=0){
            sum=sum+nums[i]%10;
            nums[i]=nums[i]/10;
        }
        if(i==sum){
        mini=min(mini,sum);
        res=true;
      }  
      }
      if(res==true){
        return mini;
      }
      return -1;
    }
};