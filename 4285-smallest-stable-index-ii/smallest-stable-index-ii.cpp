class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> maxi(n);
        vector<int> mini(n);
        maxi[0]=nums[0];
        //maximum no. finding
        for(int i=1;i<n;i++){
            maxi[i]=max(maxi[i-1],nums[i]);
        } 
        mini[n-1]=nums[n-1];
        //min no finding
        for(int i=n-2;i>=0;i--){
            mini[i]=min(mini[i+1],nums[i]);
        }
        //actual ans calc;
        for(int i=0;i<n;i++){
            if(maxi[i]-mini[i]<=k){
                return i;
            }
        }
        return -1;
    }
};