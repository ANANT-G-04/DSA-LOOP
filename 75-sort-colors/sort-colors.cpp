class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n =nums.size();
        int ze=0,on=0,tw=0;
        for(int i =0;i<n;i++){
            if(nums[i]==0){
                ze++;
            }
             if(nums[i]==1){
                on++;
            }
             if(nums[i]==2){
                tw++;
            }
        }
       for(int i=0;i<ze;i++){
            nums[i]=0;
        }
        for(int i=ze;i<ze+on;i++){
            nums[i]=1;
        }
        for(int i=ze+on;i<ze+on+tw;i++){
           nums[i]=2;
        }
        

    }
};