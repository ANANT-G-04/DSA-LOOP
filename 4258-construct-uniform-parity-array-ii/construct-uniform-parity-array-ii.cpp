class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        vector<int> nums2;
        int j=0;
        nums2.push_back(nums1[0]);
        if(nums2[0]%2!=0){
           for(int i=1;i<nums1.size();i++){
            if(nums1[i]%2!=0){
                    nums2.push_back(nums1[i]);
                }
                else{
                 nums2.push_back(nums1[i]-nums1[j]);  
            }
             if(nums2[i]%2==0){
                return false;
            }
            }
           }
        else{
           for(int i=1;i<nums1.size();i++){
            if(nums1[i]%2==0){
                    nums2.push_back(nums1[i]);
                }
                else{
                 nums2.push_back(nums1[i]-nums1[j]);  
                 
            }
            if(nums2[i]%2!=0){
                return false;
            }
            }
           }
           return true;
    }
};